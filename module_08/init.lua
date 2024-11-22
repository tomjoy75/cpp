-- Charger nvim-tree avec sa configuration
require("nvim-tree").setup()

-- Ensure packer is installed
local ensure_packer = function()
    local fn = vim.fn
    local install_path = fn.stdpath('data') .. '/site/pack/packer/start/packer.nvim'
    if fn.empty(fn.glob(install_path)) > 0 then
        fn.system({
            'git',
            'clone',
            '--depth',
            '1',
            'https://github.com/wbthomason/packer.nvim',
            install_path
        })
        vim.cmd [[packadd packer.nvim]]
        return true
    end
    return false
end

local packer_bootstrap = ensure_packer()

-- Load Packer
require('packer').startup(function(use)
    use 'wbthomason/packer.nvim' -- Packer manages itself

    -- Treesitter
    use {
        'nvim-treesitter/nvim-treesitter',
        run = ':TSUpdate'
    }
    use 'nvim-treesitter/playground' -- Plugin Playground pour Treesitter

    -- Telescope
    use {
        'nvim-telescope/telescope.nvim',
        requires = { {'nvim-lua/plenary.nvim'} }
    }

    -- Comment

	use {
  'numToStr/Comment.nvim',
  config = function()
    require('Comment').setup()
  end
}


    -- Git integration
    use 'tpope/vim-fugitive'

    -- nvim-tree
    use {
	  'nvim-tree/nvim-tree.lua',
	  requires = { 'nvim-tree/nvim-web-devicons' } -- facultatif, pour les icônes
	}
	vim.keymap.set('n', '<leader>e', ':NvimTreeToggle<CR>', { noremap = true, silent = true })




    -- Auto-sync if Packer was bootstrapped
    if packer_bootstrap then
        require('packer').sync()
    end
end)

-- Configuration Treesitter
require('nvim-treesitter.configs').setup {
    ensure_installed = { "lua" }, -- Ajoute les langages nécessaires
    highlight = {
        enable = true,           -- Active la coloration syntaxique
    },
    playground = {
        enable = true,           -- Active Playground
        updatetime = 25,         -- Mise à jour rapide
        persist_queries = false, -- Les requêtes ne sont pas sauvegardées
    },
}

-- Désactiver les providers inutiles
vim.g.loaded_perl_provider = 0
vim.g.loaded_ruby_provider = 0
vim.opt.number = true
vim.opt.smartindent = true


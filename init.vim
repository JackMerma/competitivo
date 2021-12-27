call plug#begin('~/.vim/plugged') 	"directorio donde se van a instalar los plugins
"plugins
"Plug 'joshdick/onedark.vim' 				"tema
"Plug 'EdenEast/nightfox.nvim'				"rico tema
													"otras ideas
													"https://github.com/cormacrelf/vim-colors-github
													"https://github.com/pineapplegiant/spaceduck
Plug 'pineapplegiant/spaceduck', { 'branch': 'main' } "super tema
Plug 'dracula/vim'							"tema de dracula


Plug 'Yggdroot/indentLine' 				"indentacion
"Plug 'mattn/emmet-vim' 					"emmet para diseño web
Plug 'vim-airline/vim-airline'			"diseño de la barra en la cual se muestran los modos, la linea, etc.
Plug 'vim-airline/vim-airline-themes'	"temas para el vim-airline
Plug 'preservim/nerdtree'					"gestor de archivos en forma de arbol.
"Plug 'christoomey/vim-tmux-navigator'	"poder navegar entre archivos abiertos
"Plug 'jiangmiao/auto-pairs'				"autocompletado de llaves, corchetes, etc.
"Plug 'neoclide/coc.nvim', {'branch': 'release'}	"autocompletado inteligente
Plug 'dense-analysis/ale'					"correcion >>
Plug 'tibabit/vim-templates'				"templates para archivos
Plug 'voldikss/vim-floaterm'				"terminal flotante
Plug 'ryanoasis/vim-devicons'				"iconos
Plug 'wfxr/minimap.vim'						"pequeño mapa de codigo

"Plug 'nvim-lua/plenary.nvim'				"buscador lua
"Plug 'nvim-telescope/telescope.nvim'	"bsucador usando telescope

"pruebas
"Plug 'glepnir/dashboard-nvim'				"dashboard


call plug#end() 			"cerramos el llamado de los plugins

"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

"CONFIGURACIONES BASICAS 
set number 				"muestra los numeros de cada linea en la parte izquierda 
"set relativenumber 			"la distribucion de los numeros en lineas de manera relativa
set mouse=a 				"permite la interaccion con el mouse
set noshowmode				"me deja de mostrar el modo en el que estamos 'normal, insert, visual, etc'
syntax enable 				"activa el coloreado de sintaxis en algunos tipos de archivos como html, c, c++
set encoding=utf-8 			"permite setear la codificación de archivos para aceptar caracteres especiales
set sw=3 				"la indentación genera 4 espacios
set tabstop=3
set nowrap				"el texto en una linea no baja a la siguiente, solo continua en la misma hasta el infinito.
""set noswapfile				"para evitar el mensaje que sale al abrir algunos archivos sobre swap.
set clipboard=unnamed			"para poder utilizar el portapapeles del sistema operativo 'esto permite poder copiar y pegar desde cualquier parte a nvim y viceversa.	
"set numberwidth=
set showcmd
set paste
set ruler
set laststatus=2
set t_Co=256
filetype indent on
set autoindent
set visualbell

"set splitbelow
set splitright				"file a la derecha
set ignorecase
set linebreak
set scrolloff=7			"20 lineas y no baja

inoremap " ""<left>
inoremap ' ''<left>
inoremap ( ()<left>
inoremap [ []<left>
inoremap {<CR> {<CR>}<ESC>O

inoremap <silent> <Esc> <Esc>`^

"configuracion del tema
set termguicolors 			"activa el true color en la terminal
colorscheme dracula
let g:lightline = {'colorscheme': 'dracula'}
"nmap <space>1 :colorscheme onedark<CR>
"nmap <space>2 :colorscheme dayfox<CR>

"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

"configuracion de emmet-vim
"let g:user_emmet_leader_key=' '		"tecla lider


"configuracion de vim-airline
let g:airline#extensions#tabline#enabled = 1	"muestra la linea de pestaña en la que estamos buffer
let g:airline#extensions#tabline#formatter = 'unique_tail'	"muestra solo el nombre del archivo que estamos modificando
let g:airline_theme='dracula'


"configuracion de nerdtree
nmap <space>t :NERDTreeFind<CR>
"autocmd VimEnter * NERDTree

" TextEdit might fail if hidden is not set.
set hidden

" Give more space for displaying messages.
set cmdheight=2

" Having longer updatetime (default is 4000 ms = 4 s) leads to noticeable
" delays and poor user experience.
"set updatetime=300

" Don't pass messages to |ins-completion-menu|.
set shortmess+=c

" Always show the signcolumn, otherwise it would shift the text each time
" diagnostics appear/become resolved.
if has("patch-8.1.1564")
  " Recently vim can merge signcolumn and number column into one
  set signcolumn=number
else
  set signcolumn=yes
endif

"ruta de busqueda para templates
let g:tmpl_search_paths = ['C:\Users\caqpj\templates']
"configuraciones
let g:tmpl_author_email = 'jmermap@unsa.edu.pe'
let g:tmpl_author_name = 'Jackson Fernando Merma Portocarrero'


"configuracion de mapa
let g:minimap_width = 10
let g:minimap_auto_start = 1
let g:minimap_auto_start_win_enter = 1 


"floaterm
"let g:floaterm_autoclose=2
"nmap <c-z> :FloatermNew --width=1.0 --height=1.0 --autoclose=2<CR>

"c++ compiling and running----------------------------------------------------------
"autocmd TermOpen * startinsert
"autocmd filetype cpp nmap <F4> :w<bar>!cls && g++ -o %:r.exe % -std=c++17 -s<CR>
autocmd filetype cpp nmap <F4> :w<bar>!clear & g++ -o %:r % -std=c++17 -s<CR>
autocmd filetype cpp nmap <F5> :w<bar>!clear & g++ -o %:r % -std=c++17 -s && ./%:r<CR>
"#autocmd filetype cpp nmap <F5> :w<bar>!cls && g++ -o %:r.exe % -std=c++17 -s && %:r<CR>
"atajo para Input & output"
command IO :vertical split output.txt<bar>:new input.txt<bar>:vertical resize 40<CR>

"c++ compiling and running----------------------------------------------------------


"python compiling and running----------------------------------------------------------

"autocmd filetype python nmap<F5> :w<bar>!cls && python3 %<CR>

"python compiling and running----------------------------------------------------------

"java compiling and running----------------------------------------------------------

"autocmd filetype java nmap<F4> :w<bar>!cls && javac %<CR>
"autocmd filetype java nmap<F5> :w<bar>!cls && javac % && java -cp %:p:h %:t:r<CR>

"java compiling and running----------------------------------------------------------

"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

"mapeos
nmap <space>w :w<CR>
nmap <space>q :q<CR>
nmap <space>Q :q!<CR>
nmap <space>wq :wq<CR>
nmap <space>c :%y+<CR>
nmap <space>j :vertical term<CR>

	"saltos
nmap <c-h> <c-w>h	
nmap <c-l> <c-w>l	
nmap <c-j> <c-w>j
nmap <c-k> <c-w>k

	"saltos en buffers
nmap <c-left> :bprev<CR>
nmap <c-right> :bnext<CR>
nmap <c-x> :bdelete<CR>

	"que no haga nada ctrl + z
nmap <c-z> <nop>
	"para comentarios grandes
autocmd filetype cpp inoremap /** /**<cr>/<esc>O 

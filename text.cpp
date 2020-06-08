﻿#ifdef _WIN64
#define ARCH "x64"
#else
#define ARCH "x86"
#endif

#if 0
#define TURKISH
#define SPANISH
#define SIMPLIFIED_CHINESE
#define RUSSIAN
#define INDONESIAN
#define ITALIAN
#define THAI
#define PORTUGUESE
#define KOREAN
#define FRENCH
#endif

// If you are updating a previous translation see https://github.com/Artikash/Textractor/issues/313

const char* NATIVE_LANGUAGE = "English";
const char* ATTACH = u8"Attach to game";
const char* LAUNCH = u8"Launch game";
const char* GAME_CONFIG = u8"Configure game";
const char* DETACH = u8"Detach from game";
const char* FORGET = u8"Forget game";
const char* ADD_HOOK = u8"Add hook";
const char* REMOVE_HOOKS = u8"Remove hook(s)";
const char* SAVE_HOOKS = u8"Save hook(s)";
const char* SEARCH_FOR_HOOKS = u8"Search for hooks";
const char* SETTINGS = u8"Settings";
const char* EXTENSIONS = u8"Extensions";
const char* SELECT_PROCESS = u8"Select process";
const char* ATTACH_INFO = u8R"(If you don't see the process you want to attach, try running with admin rights
You can also type in the process id)";
const char* SELECT_PROCESS_INFO = u8"If you manually type in the process file name, please use the absolute path";
const char* FROM_COMPUTER = u8"Select from computer";
const char* PROCESSES = u8"Processes (*.exe)";
const char* CODE_INFODUMP = u8R"(Enter read code
R{S|Q|V|M}[null_length<][codepage#]@addr
OR
Enter hook code
H{A|B|W|H|S|Q|V|M}[F][null_length<][N][codepage#][padding+]data_offset[*deref_offset][:split_offset[*deref_offset]]@addr[:module[:func]]
All numbers except codepage/null_length in hexadecimal
Default codepage is 932 (Shift-JIS) but this can be changed in settings
A/B: codepage char little/big endian
W: UTF-16 char
H: Two hex bytes
S/Q/V/M: codepage/UTF-16/UTF-8/hex string
F: treat strings as full lines of text
N: don't use context
null_length: length of null terminator used for string
padding: length of padding data before string (C struct { int64_t size; char string[500]; } needs padding = 8)
Negatives for data_offset/split_offset refer to registers
-4 for EAX, -8 for ECX, -C for EDX, -10 for EBX, -14 for ESP, -18 for EBP, -1C for ESI, -20 for EDI
-C for RAX, -14 for RBX, -1C for RCX, -24 for RDX, and so on for RSP, RBP, RSI, RDI, R8-R15
* means dereference pointer+deref_offset)";
const char* SAVE_SETTINGS = u8"Save settings";
const char* EXTEN_WINDOW_INSTRUCTIONS = u8R"(To add an extension, right click the extension list
Alternatively, drag and drop the extension file from your computer
To reorder extensions, drag and drop them within the list
(Extensions are used from top to bottom: order DOES matter)
To remove an extension, select it and press delete)";
const char* ADD_EXTENSION = u8"Add extension";
const char* INVALID_EXTENSION = u8"%1 is an invalid extension";
const char* CONFIRM_EXTENSION_OVERWRITE = u8"Another version of this extension already exists, do you want to delete and overwrite it?";
const char* EXTENSION_WRITE_ERROR = u8"Failed to save extension";
const char* USE_JP_LOCALE = u8"Emulate japanese locale?";
const char* FAILED_TO_CREATE_CONFIG_FILE = u8"Failed to create config file \"%1\"";
const char* HOOK_SEARCH_UNSTABLE_WARNING = u8"Searching for hooks is unstable! Be prepared for your game to crash!";
const char* SEARCH_CJK = u8"Search for Chinese/Japanese/Korean";
const char* SEARCH_PATTERN = u8"Search pattern (hex byte array)";
const char* SEARCH_DURATION = u8"Search duration (ms)";
const char* SEARCH_MODULE = u8"Search within module";
const char* PATTERN_OFFSET = u8"Offset from pattern start";
const char* MAX_HOOK_SEARCH_RECORDS = u8"Search result cap";
const char* MIN_ADDRESS = u8"Minimum address (hex)";
const char* MAX_ADDRESS = u8"Maximum address (hex)";
const char* STRING_OFFSET = u8"String offset (hex)";
const char* HOOK_SEARCH_FILTER = u8"Results must match this regex";
const char* TEXT = u8"Text";
const char* CODEPAGE = u8"Codepage";
const char* SEARCH_FOR_TEXT = u8"Search for specific text";
const char* START_HOOK_SEARCH = u8"Start hook search";
const char* SAVE_SEARCH_RESULTS = u8"Save search results";
const char* TEXT_FILES = u8"Text (*.txt)";
const char* DOUBLE_CLICK_TO_REMOVE_HOOK = u8"Double click a hook to remove it";
const char* FILTER_REPETITION = u8"Filter repetition";
const char* AUTO_ATTACH = u8"Auto attach";
const char* ATTACH_SAVED_ONLY = u8"Auto attach (saved only)";
const char* SHOW_SYSTEM_PROCESSES = u8"Show system processes";
const char* DEFAULT_CODEPAGE = u8"Default codepage";
const char* FLUSH_DELAY = u8"Flush delay";
const char* MAX_BUFFER_SIZE = u8"Max buffer size";
const char* MAX_HISTORY_SIZE = u8"Max history size";
const char* CONFIG_JP_LOCALE = u8"Launch with JP locale";
const wchar_t* CONSOLE = L"Console";
const wchar_t* CLIPBOARD = L"Clipboard";
const wchar_t* ABOUT = L"Textractor " ARCH L" v" VERSION LR"( made by me: Artikash (email: akashmozumdar@gmail.com)
Project homepage: https://github.com/Artikash/Textractor
Tutorial video: https://tinyurl.com/textractor-tutorial
FAQ: https://github.com/Artikash/Textractor/wiki/FAQ
Please contact me with any problems, feature requests, or questions relating to Textractor
You can do so via the project homepage (issues section) or via email
Source code available under GPLv3 at project homepage
If you like this project, please tell everyone about it :))";
const wchar_t* CL_OPTIONS = LR"(usage: Textractor [-p{process id|"process name"}]...
example: Textractor -p4466 -p"My Game.exe" tries to inject processes with id 4466 or with name My Game.exe)";
const wchar_t* UPDATE_AVAILABLE = L"Update available: download it from https://github.com/Artikash/Textractor/releases";
const wchar_t* ALREADY_INJECTED = L"Textractor: already injected";
const wchar_t* NEED_32_BIT = L"Textractor: architecture mismatch: only Textractor x86 can inject this process";
const wchar_t* NEED_64_BIT = L"Textractor: architecture mismatch: only Textractor x64 can inject this process";
const wchar_t* INJECT_FAILED = L"Textractor: couldn't inject";
const wchar_t* LAUNCH_FAILED = L"Textractor: couldn't launch";
const wchar_t* INVALID_CODE = L"Textractor: invalid code";
const wchar_t* INVALID_CODEPAGE = L"Textractor: couldn't convert text (invalid codepage?)";
const char* PIPE_CONNECTED = u8"Textractor: pipe connected";
const char* INSERTING_HOOK = u8"Textractor: inserting hook: %s";
const char* REMOVING_HOOK = u8"Textractor: removing hook: %s";
const char* HOOK_FAILED = u8"Textractor: failed to insert hook";
const char* TOO_MANY_HOOKS = u8"Textractor: too many hooks: can't insert";
const char* STARTING_SEARCH = u8"Textractor: starting search";
const char* NOT_ENOUGH_TEXT = u8"Textractor: not enough text to search accurately";
const char* HOOK_SEARCH_INITIALIZED = u8"Textractor: search initialized with %zd hooks";
const char* MAKE_GAME_PROCESS_TEXT = u8"Textractor: please click around in the game to force it to process text during the next %d seconds";
const char* HOOK_SEARCH_FINISHED = u8"Textractor: hook search finished, %d results found";
const char* OUT_OF_RECORDS_RETRY = u8"Textractor: out of search records, please retry if results are poor (default record count increased)";
const char* FUNC_MISSING = u8"Textractor: function not present";
const char* MODULE_MISSING = u8"Textractor: module not present";
const char* GARBAGE_MEMORY = u8"Textractor: memory constantly changing, useless to read";
const char* SEND_ERROR = u8"Textractor: Send ERROR (likely an unstable/incorrect H-code)";
const char* READ_ERROR = u8"Textractor: Reader ERROR (likely an incorrect R-code)";
const char* HIJACK_ERROR = u8"Textractor: Hijack ERROR";
const char* COULD_NOT_FIND = u8"Textractor: could not find text";
const char* TRANSLATE_TO = u8"Translate to";
const char* TRANSLATE_SELECTED_THREAD_ONLY = u8"Translate selected text thread only";
const char* RATE_LIMIT_ALL_THREADS = u8"Rate limit all text threads";
const char* RATE_LIMIT_SELECTED_THREAD = u8"Rate limit selected text thread";
const char* USE_TRANS_CACHE = u8"Use translation cache";
const char* RATE_LIMIT_TOKEN_COUNT = u8"Rate limiter token count";
const char* RATE_LIMIT_TOKEN_RESTORE_DELAY = u8"Rate limiter token restore delay (ms)";
const wchar_t* TOO_MANY_TRANS_REQUESTS = L"Rate limit exceeded: refuse to make more translation requests";
const wchar_t* TRANSLATION_ERROR = L"Error while translating";
const char* USE_PREV_SENTENCE_CONTEXT = u8"Use previous sentence as context";
const char* API_KEY = u8"API key";
const char* EXTRA_WINDOW_INFO = u8R"(Right click to change settings
Click and drag on window edges to move, or the bottom right corner to resize)";
const char* SENTENCE_TOO_BIG = u8"Sentence too large to display";
const char* MAX_SENTENCE_SIZE = u8"Max sentence size";
const char* TOPMOST = u8"Always on top";
const char* DICTIONARY = u8"Dictionary";
const char* DICTIONARY_INSTRUCTIONS = u8R"(This file is used only for the "Dictionary" feature of the Extra Window extension.
It uses a custom format specific to Textractor and is not meant to be written manually.
You should look for a dictionary in this format online (https://github.com/Artikash/Textractor-Dictionaries/releases is a good place to start).
Alternatively, if you're a programmer, you can write a script to convert a dictionary from another format with the info below.
Once you have a dictionary, to look up some text in Extra Window, hover over it. You can scroll through all the matching definitions.
Definitions are formatted like this:|TERM|Hola<<ignored|TERM|hola|TERM|Bonjour|TERM|bonjour|DEFINITION|hello|END|
The term and definition can include rich text (https://doc.qt.io/qt-5/richtext-html-subset.html) which will be formatted properly.
Inflections are formatted like this:|ROOT|1<<noun|INFLECTS TO|(\w*)s|NAME| plural|END|
Textractor will check if a term matches the inflection regex and if it does, will recursively search for the root term.
The root term is generated by replacing each number with the corresponding regex capture group (with 0 being replaced by the entire match).
This process can easily result in infinite loops and/or stack overflows. It's your job to avoid that.
Inflection regex uses QRegularExpression (https://doc.qt.io/qt-5/qregularexpression.html) unicode syntax.
Textractor will display the final root term as well as all inflections used to get to that root term.
However, the text in a term after << is ignored when displaying. This is intended to store part-of-speech information.
This file must be encoded in UTF-8.)";
const char* SHOW_ORIGINAL = u8"Original text";
const char* SHOW_ORIGINAL_INFO = u8R"(Original text will not be shown
Only works if this extension is used directly after a translation extension)";
const char* SIZE_LOCK = u8"Size lock";
const char* OPACITY = u8"Opacity";
const char* BG_COLOR = u8"Background color";
const char* TEXT_COLOR = u8"Text color";
const char* TEXT_OUTLINE = u8"Text outline";
const char* OUTLINE_COLOR = u8"Outline color";
const char* OUTLINE_SIZE = u8"Outline size";
const char* OUTLINE_SIZE_INFO = u8"Size in pixels (recommended to stay below 20% of the font size)";
const char* FONT = u8"Font";
const char* LUA_INTRO = u8R"(--[[
ProcessSentence is called each time Textractor receives a sentence of text.

Param sentence: sentence received by Textractor (UTF-8).
Param sentenceInfo: table of miscellaneous info about the sentence.

If you return a string, the sentence will be turned into that string.
If you return nil, the sentence will be unmodified.

This extension uses several copies of the Lua interpreter for thread safety.
Modifications to global variables from ProcessSentence are not guaranteed to persist.

Properties in sentenceInfo:
"current select": 0 unless sentence is in the text thread currently selected by the user.
"process id": process id that the sentence is coming from. 0 for console and clipboard.
"text number": number of the current text thread. Counts up one by one as text threads are created. 0 for console, 1 for clipboard.
--]]
function ProcessSentence(sentence, sentenceInfo)
  --Your code here...
end)";
const char* LOAD_LUA_SCRIPT = u8"Load script";
const wchar_t* LUA_ERROR = L"Lua error: %s";
const char* REGEX_FILTER = u8"Regex Filter";
const char* INVALID_REGEX = u8"Invalid regex";
const char* CURRENT_FILTER = u8"Currently filtering: %1";
const wchar_t* REPLACER_INSTRUCTIONS = LR"(This file only does anything when the "Replacer" extension is used.
Replacement commands must be formatted like this:
|ORIG|original_text|BECOMES|replacement_text|END|
All text in this file outside of a replacement command is ignored.
A caret (^) acts as a wildcard that matches any other single character.
Whitespace in original_text is ignored, but replacement_text can contain spaces, newlines, etc.
This file must be encoded in Unicode (UTF-16 Little Endian).)";
const char* THREAD_LINKER = u8"Thread Linker";
const char* LINK = u8"Link";
const char* THREAD_LINK_FROM = u8"Thread number to link from";
const char* THREAD_LINK_TO = u8"Thread number to link to";
const char* HEXADECIMAL = u8"Hexadecimal";

static auto _ = []
{
#ifdef TURKISH
	NATIVE_LANGUAGE = "Turkish";
	ATTACH = u8"Oyuna bağla";
	DETACH = u8"Oyundan kopar";
	ADD_HOOK = u8"Kanca ekle";
	SAVE_HOOKS = u8"Kancaları kaydet";
	SETTINGS = u8"Ayarlar";
	EXTENSIONS = u8"Uzantılar";
	SELECT_PROCESS = u8"İşlem seçin";
	ATTACH_INFO = u8"Bağlanmak istediğiniz işlemi görmüyorsanız yönetici olarak çalıştırmayı deneyin";
	DEFAULT_CODEPAGE = u8"Varsayılan Kod Sayfası";
	FLUSH_DELAY = u8"Temizleme Gecikmesi";
	MAX_BUFFER_SIZE = u8"Maksimum Arabellek Boyu";
	ABOUT = L"Textractor " ARCH L" v" VERSION LR"( (proje ana sayfası: https://github.com/Artikash/Textractor)
Benim tarafımdan yapıldı: Artikash (e-posta: akashmozumdar@gmail.com)
Textractor ile ilgili tüm sorunlarınız, istekleriniz ve sorularınız için lütfen benimle iletişime geçin
Benimle, proje ana sayfasından (“issues” kısmından) ya da e-posta aracılığıyla iletişime geçebilirsiniz
Kaynak kodu GKLv3 koruması altında proje ana sayfasında mevcut)";
	UPDATE_AVAILABLE = L"Güncelleme mevcut: https://github.com/Artikash/Textractor/releases adresinden indirin";
	ALREADY_INJECTED = L"Textractor: Zaten enjekte edili";
	NEED_32_BIT = L"Textractor: Mimari uyumsuzluğu: Lütfen Textractor’ın 32 bitlik sürümünü deneyin";
	INJECT_FAILED = L"Textractor: Enjekte edilemedi";
	INVALID_CODE = L"Textractor: Geçersiz kod";
	INVALID_CODEPAGE = L"Textractor: Metne dönüştürülemedi (geçersiz kod sayfası?)";
	PIPE_CONNECTED = u8"Textractor: Boru bağlandı";
	INSERTING_HOOK = u8"Textractor: Kanca ekleniyor: %s";
	REMOVING_HOOK = u8"Textractor: Kanca çıkarılıyor:: %s";
	HOOK_FAILED = u8"Textractor: Kanca eklenemedi";
	TOO_MANY_HOOKS = u8"Textractor: Çok fazla kanca var: Eklenemiyor";
	FUNC_MISSING = u8"Textractor: Fonksiyon mevcut değil";
	MODULE_MISSING = u8"Textractor: Modül mevcut değil";
	GARBAGE_MEMORY = u8"Textractor: Hafıza sürekli değişiyor, okumak boşa";
#endif // TURKISH

#ifdef SPANISH
	NATIVE_LANGUAGE = "Spanish";
	ATTACH = u8"Adjuntar juego";
	LAUNCH = u8"Iniciar juego";
	DETACH = u8"Desconectar juego";
	ADD_HOOK = u8"Añadir hook";
	SAVE_HOOKS = u8"Guardar hook(s)";
	SETTINGS = u8"Opciones";
	EXTENSIONS = u8"Extensiones";
	SELECT_PROCESS = u8"Seleccionar procreso";
	ATTACH_INFO = u8R"(Si no ves el proceso que quieras adjuntar, ejecuta este programa como administrador
También puedes escribir la ID del proceso)";
	FROM_COMPUTER = u8"Seleccionar desde computadora";
	PROCESSES = u8"Procesos (*.exe)";
	SAVE_SETTINGS = u8"Guardar opciones";
	EXTEN_WINDOW_INSTRUCTIONS = u8R"(Arrrastra y suelta la extension (.dll) aquí desde tu computadora para añadirlos
Arrastra y suelta la lista para reordenar
Presiona supr en una extension seleccionada para removerla)";
	USE_JP_LOCALE = u8"¿Emular idioma japonés?";
	DEFAULT_CODEPAGE = u8"Default Codepage";
	FLUSH_DELAY = u8"Flush Delay";
	MAX_BUFFER_SIZE = u8"Max Buffer Size";
	CONSOLE = L"Consola";
	CLIPBOARD = L"Portapapeles";
	ABOUT = L"Textractor " ARCH L" v" VERSION LR"( hecho por mí: Artikash (correo: akashmozumdar@gmail.com)
Página del proyecto: https://github.com/Artikash/Textractor
Video tutorial: https://tinyurl.com/textractor-tutorial
No dudes en conectarme si tienes algún problema, petición de característica o preguntas relacionadas con Textractor
Puedes hacerlo en la página del proyecto (en el apartado de "Issues") o por correo. Usa el inglés para comunicarte.
Código fuente disponible bajo GPLv3 en la página del proyecto)";
	UPDATE_AVAILABLE = L"Actualización disponible: descárguela en https://github.com/Artikash/Textractor/releases";
	ALREADY_INJECTED = L"Textractor: ya inyectado";
	INJECT_FAILED = L"Textractor: no se puede inyectar";
	LAUNCH_FAILED = L"Textractor: no se puede iniciar";
	INVALID_CODE = L"Textractor: código inválido";
	INVALID_CODEPAGE = L"Textractor: no se puede convertir texto (¿Codepage inválido?)";
	PIPE_CONNECTED = u8"Textractor: pipe connected";
	INSERTING_HOOK = u8"Textractor: insertando hook: %s";
	REMOVING_HOOK = u8"Textractor: removiendo hook: %s";
	HOOK_FAILED = u8"Textractor: no se puede insertar hook";
	TOO_MANY_HOOKS = u8"Textractor: demasiados hooks: no se puede insertar";
	NOT_ENOUGH_TEXT = u8"Textractor: no hay suficiente texto para buscar con precisión";
	FUNC_MISSING = u8"Textractor: función no presente";
	MODULE_MISSING = u8"Textractor: module not present";
	GARBAGE_MEMORY = u8"Textractor: memory constantly changing, useless to read";
	SEND_ERROR = u8"Textractor: Send ERROR (probablemente un H-code incorrecto)";
	READ_ERROR = u8"Textractor: Reader ERROR (probablemente un R-code incorrecto)";
	HIJACK_ERROR = u8"Textractor: Hijack ERROR";
	COULD_NOT_FIND = u8"Textractor: no se puede encontrar texto";
	TOO_MANY_TRANS_REQUESTS = L"Demasiadas peticiones de traducción: no se puede hacer más";
	TRANSLATION_ERROR = L"Error al traducir";
	EXTRA_WINDOW_INFO = u8R"(Clic derecho para configurar
Clic y arrastra los bordes de la ventana para moverla, o en la esquina inferior derecha para cambiar el tamaño)";
	BG_COLOR = u8"Color de fondo";
	TEXT_COLOR = u8"Color de texto";
	TOPMOST = u8"Siempre visible";
	REGEX_FILTER = u8"Filtro Regex";
	INVALID_REGEX = u8"Regex inválido";
	CURRENT_FILTER = u8"Actualmente filtrando: %1";
#endif // SPANISH

#ifdef SIMPLIFIED_CHINESE
	NATIVE_LANGUAGE = "Chinese (simplified)";
	ATTACH = u8"附加到游戏";
	LAUNCH = u8"启动游戏";
	DETACH = u8"从游戏分离";
	ADD_HOOK = u8"添加钩子";
	SAVE_HOOKS = u8"保存钩子";
	SETTINGS = u8"设置";
	EXTENSIONS = u8"扩展";
	SELECT_PROCESS = u8"选择进程";
	ATTACH_INFO = u8R"(如果没看见想要附加的进程，尝试使用管理员权限运行
也可以手动输入进程ID)";
	FROM_COMPUTER = u8"从计算机中选择";
	PROCESSES = u8"进程 (*.exe)";
	SAVE_SETTINGS = u8"保存设置";
	EXTEN_WINDOW_INSTRUCTIONS = u8R"(从计算机拖拽扩展 (.dll) 文件到这里来添加
(如果使用超级管理员运行，则无法工作)
在列表中拖拽来重新排序
使用 delete 键移除选中的扩展)";
	USE_JP_LOCALE = u8"模拟日本区域设置?";
	DEFAULT_CODEPAGE = u8"默认代码页";
	FLUSH_DELAY = u8"刷新延迟";
	MAX_BUFFER_SIZE = u8"最大缓冲区长度";
	CONSOLE = L"控制台";
	CLIPBOARD = L"剪贴板";
	ABOUT = L"Textractor " ARCH L" v" VERSION LR"( 作者: Artikash (email: akashmozumdar@gmail.com)
项目主页: https://github.com/Artikash/Textractor
教程视频: https://tinyurl.com/textractor-tutorial
如果有任何关于 Textractor 的困难，功能请求或问题，请联系我
可以通过项目主页 (问题区) 或通过邮件来联系
项目主页提供基于 GPLv3 协议的源代码)";
	UPDATE_AVAILABLE = L"有可用的更新: 请从 https://github.com/Artikash/Textractor/releases 下载";
	ALREADY_INJECTED = L"Textractor: 已经注入";
	NEED_32_BIT = L"Textractor: 架构不匹配: 请尝试使用 Textractor x86";
	INJECT_FAILED = L"Textractor: 无法注入";
	LAUNCH_FAILED = L"Textractor: 无法启动";
	INVALID_CODE = L"Textractor: 无效代码";
	INVALID_CODEPAGE = L"Textractor: 无法转换文本 (无效的代码页?)";
	PIPE_CONNECTED = u8"Textractor: 管道已连接";
	INSERTING_HOOK = u8"Textractor: 注入钩子: %s";
	REMOVING_HOOK = u8"Textractor: 移除钩子: %s";
	HOOK_FAILED = u8"Textractor: 钩子注入失败";
	TOO_MANY_HOOKS = u8"Textractor: 钩子太多: 无法注入";
	NOT_ENOUGH_TEXT = u8"Textractor: 没有足够的文本来精确搜索";
	FUNC_MISSING = u8"Textractor: 函数不存在";
	MODULE_MISSING = u8"Textractor: 模块不存在";
	GARBAGE_MEMORY = u8"Textractor: 内存一直在变，读了也没用";
	SEND_ERROR = u8"Textractor: Sender 错误 (H码可能不正确)";
	READ_ERROR = u8"Textractor: Reader 错误 (R码可能不正确)";
	HIJACK_ERROR = u8"Textractor: Hijack 错误";
	COULD_NOT_FIND = u8"Textractor: 无法找到文本";
	TOO_MANY_TRANS_REQUESTS = L"太多翻译请求: 拒绝生成更多";
	TRANSLATION_ERROR = L"翻译时出错";
	EXTRA_WINDOW_INFO = u8R"(右键修改设置
在窗口边缘点击并拖拽来移动，或在右下角点击并拖拽来调整大小)";
	BG_COLOR = u8"背景颜色";
	TEXT_COLOR = u8"文本颜色";
	TOPMOST = u8"总是位于最上层";
	REGEX_FILTER = u8"正则表达式过滤器";
	INVALID_REGEX = u8"无效的正则表达式";
	CURRENT_FILTER = u8"当前过滤中: %1";
#endif // SIMPLIFIED_CHINESE

#ifdef RUSSIAN
	NATIVE_LANGUAGE = "Russian";
	ATTACH = u8"Присоединить к игре";
	LAUNCH = u8"Запустить игру";
	GAME_CONFIG = u8"Настройки игры";
	DETACH = u8"Отсоединить от игры";
	FORGET = u8"Забыть игру";
	ADD_HOOK = u8"Добавить хук";
	REMOVE_HOOKS = u8"Удалить хук(и)";
	SAVE_HOOKS = u8"Сохранить хук(и)";
	SEARCH_FOR_HOOKS = u8"Найти хуки";
	SETTINGS = u8"Настройки";
	EXTENSIONS = u8"Расширения";
	SELECT_PROCESS = u8"Выберете процесс";
	ATTACH_INFO = u8R"(Если вы не видите процесс, к которому хотите присоединить, попробуйте запуск с правами администратора
Вы также можете ввести id процесса)";
	SELECT_PROCESS_INFO = u8"При ручном вводе имени файла процесса используйте абсолютный путь";
	FROM_COMPUTER = u8"Найти в проводнике";
	PROCESSES = u8"Процессы (*.exe)";
	CODE_INFODUMP = u8R"(Введите код чтения
R{S|Q|V|M}[null_length<][codepage#]@addr
ИЛИ
Введите хук-код
H{A|B|W|H|S|Q|V|M}[F][null_length<][N][codepage#][padding+]data_offset[*deref_offset][:split_offset[*deref_offset]]@addr[:module[:func]]
Все цифры кроме codepage/null_length в hexadecimal
Кодировка по умолчанию - 932 (Shift-JIS), но может быть изменена в настройках
A/B: символ кодировки little/big endian
W: символ UTF-16
H: Два hex байта
S/Q/V/M: codepage/UTF-16/UTF-8/hex string
F: treat strings as full lines of text
N: не использовать контекст
null_length: длина null прерывателя, используемого в строке
padding: длина добавочных данных перед строкой (C struct { int64_t size; char string[500]; } needs padding = 8)
Отрицательное для data_offset/split_offset ссылается на регистры
-4 для EAX, -8 для ECX, -C для EDX, -10 для EBX, -14 для ESP, -18 для EBP, -1C для ESI, -20 для EDI
-C для RAX, -14 для RBX, -1C для RCX, -24 для RDX, и так далее для RSP, RBP, RSI, RDI, R8-R15
* значит указатель разницы+deref_offset)";
	SAVE_SETTINGS = u8"Сохранить настройки";
	EXTEN_WINDOW_INSTRUCTIONS = u8R"(Перетащите сюда (.dll) файлы расширений из проводника для их добавления
(Не работает при запуске от администратора)
Перетаскивайте по списку для изменения порядка
Нажмите клавишу удаления, чтобы удалить выбранное расширение)";
	ADD_EXTENSION = u8"Добавить расширение";
	INVALID_EXTENSION = u8"%1 - неверное расширение";
	CONFIRM_EXTENSION_OVERWRITE = u8"Уже существует другая версия этого расширения, перезаписать его?";
	EXTENSION_WRITE_ERROR = u8"Не удалось сохранить расширение";
	USE_JP_LOCALE = u8"Симулировать японскую локаль?";
	FAILED_TO_CREATE_CONFIG_FILE = u8"Не удалось создать файл настроек \"%1\"";
	HOOK_SEARCH_UNSTABLE_WARNING = u8"Поиск хуков нестабилен! Игра может закрыться с ошибкой!";
	SEARCH_CJK = u8"Поиск для Китайского/Японского/Корейского";
	SEARCH_PATTERN = u8"Шаблон поиска (hex byte array)";
	SEARCH_DURATION = u8"Продолжительность поиска (ms)";
	SEARCH_MODULE = u8"Поиск по модулю";
	PATTERN_OFFSET = u8"Смещение от начала шаблона";
	MAX_HOOK_SEARCH_RECORDS = u8"Порог поиска";
	MIN_ADDRESS = u8"Начальный адрес (hex)";
	MAX_ADDRESS = u8"Конечный адрес (hex)";
	STRING_OFFSET = u8"Смещение строки (hex)";
	HOOK_SEARCH_FILTER = u8"Результат должен совпадать с этим regex";
	TEXT = u8"Текст";
	CODEPAGE = u8"Кодировка";
	SEARCH_FOR_TEXT = u8"Поиск определенного текста";
	START_HOOK_SEARCH = u8"Начать поиск хуков";
	SAVE_SEARCH_RESULTS = u8"Сохранить результат поиска";
	TEXT_FILES = u8"Текст (*.txt)";
	DOUBLE_CLICK_TO_REMOVE_HOOK = u8"Двойной клик по хуку для его удаления";
	FILTER_REPETITION = u8"Фильтр повторений";
	AUTO_ATTACH = u8"Авто-присоединение";
	ATTACH_SAVED_ONLY = u8"Авто-присоединение (только сохраненные)";
	SHOW_SYSTEM_PROCESSES = u8"Показать системные процесы";
	DEFAULT_CODEPAGE = u8"Кодировка по умолчанию";
	FLUSH_DELAY = u8"Задержка сброса";
	MAX_BUFFER_SIZE = u8"Максимальный размер буфера";
	MAX_HISTORY_SIZE = u8"Макс. размер истории";
	CONFIG_JP_LOCALE = u8"Запуск с JP локалью";
	CONSOLE = L"Консоль";
	CLIPBOARD = L"Буфер обмена";
	ABOUT = L"Textractor " ARCH L" в." VERSION LR"( автор: Artikash (email: akashmozumdar@gmail.com)
Домашняя страница: https://github.com/Artikash/Textractor
Обучающее видео: https://tinyurl.com/textractor-tutorial
Сообщайте о любых проблемах, желаемых для добавления функциях, или задавайте вопросы, касающиеся Textractor
Сделать это вы можете на домашней странице (секция issues) или через электронную почту
Исходный код доступен по лицензии GPLv3 на домашней странице проекта
Если эта программа вам понравилась, расскажите всем о ней :))";
	CL_OPTIONS = LR"(использование: Textractor [-p{process id|"process name"}]...
пример: Textractor -p4466 -p"My Game.exe" попробует присоединиться к процессу с id 4466 или с именем My Game.exe)";
	UPDATE_AVAILABLE = L"Доступно обновление: загрузите его на https://github.com/Artikash/Textractor/releases";
	ALREADY_INJECTED = L"Textractor: уже присоединен";
	NEED_32_BIT = L"Textractor: несоответствие архитектуры: попробуйте Textractor x86 вместо этого";
	NEED_64_BIT = L"Textractor: несоответствие архитектуры: только Textractor x64 может присоединиться к этому процессу";
	INJECT_FAILED = L"Textractor: невозможно присоединиться";
	LAUNCH_FAILED = L"Textractor: невозможно запустить";
	INVALID_CODE = L"Textractor: неверный код";
	INVALID_CODEPAGE = L"Textractor: невозможно конвертировать текст (неверная кодировка?)";
	PIPE_CONNECTED = u8"Textractor: канал присоединен";
	INSERTING_HOOK = u8"Textractor: вставка хука: %s";
	REMOVING_HOOK = u8"Textractor: удаление хука: %s";
	HOOK_FAILED = u8"Textractor: не удалось вставить хук";
	TOO_MANY_HOOKS = u8"Textractor: слишком много хуков: невозможно вставить";
	STARTING_SEARCH = u8"Textractor: начало поиска";
	NOT_ENOUGH_TEXT = u8"Textractor: не достаточно текста для точного поиска";
	HOOK_SEARCH_INITIALIZED = u8"Textractor: поиск инициализирован с %zd хуками";
	MAKE_GAME_PROCESS_TEXT = u8"Textractor: покликайте в игре, чтобы вызвать смену текста в течение %d секунд";
	HOOK_SEARCH_FINISHED = u8"Textractor: поиск хуков завершен, %d результатов найдено";
	OUT_OF_RECORDS_RETRY = u8"Textractor: записи для поиска закончились, повторите,если результаты неудовлетворительны (количество записей по умолчанию увеличено)";
	FUNC_MISSING = u8"Textractor: функция отсутствует";
	MODULE_MISSING = u8"Textractor: модуль отсутствует";
	GARBAGE_MEMORY = u8"Textractor: память постоянно изменяется, бесполезно читать";
	SEND_ERROR = u8"Textractor: Send ERROR (вероятно неверный H-code)";
	READ_ERROR = u8"Textractor: Reader ERROR (вероятно неверный R-code)";
	COULD_NOT_FIND = u8"Textractor: невозможно найти текст";
	TRANSLATE_TO = u8"Переводить на";
	TRANSLATE_SELECTED_THREAD_ONLY = u8"Переводить текст только в выбранном потоке";
	RATE_LIMIT_ALL_THREADS = u8"Ограничение скорости для всех текстовых потоков";
	RATE_LIMIT_SELECTED_THREAD = u8"Ограничение скорости выделенного текстового потока";
	USE_TRANS_CACHE = u8"Использовать кеш перевода";
	RATE_LIMIT_TOKEN_COUNT = u8"Ограничение частоты подсчёта токенов";
	RATE_LIMIT_TOKEN_RESTORE_DELAY = u8"Ограничение частоты задержки восстановления токенов (мс)";
	TOO_MANY_TRANS_REQUESTS = L"Слишком много запросов для перевода: отклонено";
	TRANSLATION_ERROR = L"Ошибка при переводе";
	USE_PREV_SENTENCE_CONTEXT = u8"Использовать предыдущее предложение как контекст";
	API_KEY = u8"Ключ API";
	EXTRA_WINDOW_INFO = u8R"(Правый клик для изменения настроек
Нажмите и перетащите за края - для перемещения, или за правый-нижний угол - для изменения размера)";
	SENTENCE_TOO_BIG = u8"Придложение слишком длинное для отображения";
	MAX_SENTENCE_SIZE = u8"Максимальная длина предложения";
	TOPMOST = u8"Поверх всех окон";
	DICTIONARY = u8"Словарь";
	DICTIONARY_INSTRUCTIONS = u8R"(Этот файл использован только для функции "Словарь" расширения Extra Window.
Он использует свой формат, специально для Textractor и не предназначен для рачного ввода.
Смотрите онлайн словарь в этом формате(https://github.com/Artikash/Textractor-Dictionaries/releases - начните здесь).
В качестве альтернативы, если вы программист, вы можете написать скрипт для конвертирования словаря из другого формата с информацией, приведенной ниже.
При наличии словаря, для просмотра текста в Экстра окне просто наведите курсор на него. Можно прокрутить все совпадающие определения.
Определения имеют следующий формат:|TERM|Hola<<ignored|TERM|hola|TERM|Bonjour|TERM|bonjour|DEFINITION|hello|END|
Термин и определение могут включать форматированный текст(https://doc.qt.io/qt-5/richtext-html-subset.html), который будет соответствующе отформатирован.
Перефразировки имеют следующий формат:|ROOT|1<<noun|INFLECTS TO|(\w*)s|NAME| plural|END|
Textractor проверит, совпадает ли термин с регексом перефразировки и при совпадении будет рекурсивно искать корневой термин..
Корневой термин генерируется путем замены каждого числа на соответствующую regex группу захвата(при этом 0 заменяется на полное совпадение).
Этот процесс может легко привести к бесконечным циклам и/или переполнению стека. Ваша задача - избежать этого.
regex перефразировок использует QRegularExpression (https://doc.qt.io/qt-5/qregularexpression.html) unicode синтаксис.
Textractor отобразит конечный корневой термин, а также все перефразировки, используемые для получения этого корневого термина.
Однако,текст в термине после << игнорируется при отображении. Это сделано для хранения информации о части речи.
У этого файла кодировка должна быть UTF-8.)";
	SHOW_ORIGINAL = u8"Исходный текст";
	SHOW_ORIGINAL_INFO = u8R"(Исходный текст будет скрыт
Работает только если это расширение используется после расширения перевода)";
	SIZE_LOCK = u8"Фиксированный размер";
	OPACITY = u8"Прозрачность";
	BG_COLOR = u8"Цвет заднего фона";
	TEXT_COLOR = u8"Цвет текста";
	TEXT_OUTLINE = u8"Обводка текста";
	OUTLINE_COLOR = u8"Цвет обводки";
	OUTLINE_SIZE = u8"Толщина обводки";
	OUTLINE_SIZE_INFO = u8"Размер в пикселях (рекомендуется оставить как 20% от размера шрифта)";
	FONT = u8"Шрифт";
	LUA_INTRO = u8R"(--[[
ProcessSentence вызывается каждый раз, когда Textractor получает предложение с текстом.

Param sentence: предложение полученое в Textractor (UTF-8).
Param sentenceInfo: таблица различной информации о предложении.

При возвращении строки предложение будет изменено на эту строку.
При возвращении нуля, предложение останется без изменения.

Это расширение использует несколько копий интерпретатора Lua для безопасности нити.
Модификации глобальных переменных из ProcessSentence не обязательно сохраняется.

Параметры в sentenceInfo:
"current select": равно 0, если предложение не находится в текстовой нити, выбранной в данный момент пользователем.
"process id": id процесса, из которого предложение поступило. Равно 0, когда это консоль или буфер обмена.
"text number": номер текущей текстовой нити. Растет один за другим по мере создания текстовых нитей. 0 для консоли, 1 для буфера обмена.
--]]
function ProcessSentence(sentence, sentenceInfo)
  --Ваш код здесь...
end)";
	LOAD_LUA_SCRIPT = u8"Загрузить скрипт";
	LUA_ERROR = L"Ошибка Lua: %s";
	REGEX_FILTER = u8"Фильтр Regex";
	INVALID_REGEX = u8"Неверный regex";
	CURRENT_FILTER = u8"Сейчас фильтруется: %1";
	REPLACER_INSTRUCTIONS = LR"(Этот файл делает что-то только когда используется расширение "Replacer".
Команды для замены должны выглядеть так:
|ORIG|текст_оригинала|BECOMES|текст_замены|END|
Весь текст в этом файле вне команд заменителей будет проигнорирован.
Пробелы в текст_оригинала игнорируются, но текст_замены может содержать пробелы, новые строки и пр.
Этот файл должен быть в кодировке Unicode (UTF-16 little endian).)";
	THREAD_LINKER = u8"Связыватель нитей";
	LINK = u8"Связь";
	THREAD_LINK_FROM = u8"Номер нити, от которой связывать";
	THREAD_LINK_TO = u8"Номер нити, к которой привязывать";
#endif // RUSSIAN

#ifdef INDONESIAN
	NATIVE_LANGUAGE = "Indonesian";
	ATTACH = u8"Tempelkan kedalam game";
	LAUNCH = u8"Mulai game";
	DETACH = u8"Lepaskan dari game";
	ADD_HOOK = u8"Tambahkan hook";
	SAVE_HOOKS = u8"Simpan hook";
	SETTINGS = u8"Pengaturan";
	EXTENSIONS = u8"Ekstensi";
	SELECT_PROCESS = u8"Pilih Proses";
	ATTACH_INFO = u8R"(Jika kamu tidak dapat melihat proses yang akan ditempelkan, coba menjalankan dengan mode administrator
Kamu juga dapat mengetik process id game yang akan ditempel)";
	FROM_COMPUTER = u8"Pilih dari komputer";
	PROCESSES = u8"Proses (*.exe)";
	SAVE_SETTINGS = u8"Simpan pengaturan";
	EXTEN_WINDOW_INSTRUCTIONS = u8R"(Drag and drop file ekstensi (.dll) kedalam sini dari komputer kamu untuk menambah ekstensi
(Tidak bekerja dalam mode administrator)
Drag and drop ekstensi di dalam list untuk mengatur list
Tekan delete pada ekstensi yang dipilih untuk menghapus ekstensi)";
	USE_JP_LOCALE = u8"Gunakan locale jepang?";
	DEFAULT_CODEPAGE = u8"Codepage standar";
	FLUSH_DELAY = u8"Flush Delay";
	MAX_BUFFER_SIZE = u8"Max Buffer Size";
	CONSOLE = L"Konsol";
	CLIPBOARD = L"Papan clipboard";
	ABOUT = L"Textractor " ARCH L" v" VERSION LR"( dibuat oleh saya: Artikash (email: akashmozumdar@gmail.com)
Halaman project: https://github.com/Artikash/Textractor
Video tutorial : https://tinyurl.com/textractor-tutorial
Tolong hubungi saya jika kamu memiliki masalah terkait masalah, permintaan fitur, atau pertanyaan terkait Textractor
Kamu dapat melakukannya lewat halaman utama project (bagian issues) atau lewat email
Source code tersedia dibawah lisensi GPLv3 di halaman utama project
Jika kamu menyukai project ini, tolong sebarluaskan project ini :))";
	UPDATE_AVAILABLE = L"Pembaharuan tersedia: pembaharuan dapat di unduh di https://github.com/Artikash/Textractor/releases";
	ALREADY_INJECTED = L"Textractor: sudah ditempelkan";
	INJECT_FAILED = L"Textractor: menempelkan gagal";
	LAUNCH_FAILED = L"Textractor: game tidak dapat dijalankan";
	INVALID_CODE = L"Textractor: kode tidak sesuai";
	INVALID_CODEPAGE = L"Textractor: tidak dapat mengkonversi teks (Codepage tidak sesuai?)";
	PIPE_CONNECTED = u8"Textractor: pipe tersambung";
	INSERTING_HOOK = u8"Textractor: memasukkan hook: %s";
	REMOVING_HOOK = u8"Textractor: menghapus hook: %s";
	HOOK_FAILED = u8"Textractor: gagal memasukkan hook";
	TOO_MANY_HOOKS = u8"Textractor: terlalu banyak hook: tidak dapat memasukkan hook";
	NOT_ENOUGH_TEXT = u8"Textractor: tidak cukup teks untuk melakukan pencarian secara akurat";
	FUNC_MISSING = u8"Textractor: tidak ada fungsi";
	MODULE_MISSING = u8"Textractor: tidak ada modul";
	GARBAGE_MEMORY = u8"Textractor: memory terus berganti, tidak dapat dibaca";
	SEND_ERROR = u8"Textractor: Send ERROR (kemungkinan H-Code salah)";
	READ_ERROR = u8"Textractor: Reader ERROR (Kemungkinan R-Code salah)";
	HIJACK_ERROR = u8"Textractor: Hijack ERROR";
	COULD_NOT_FIND = u8"Textractor: tidak dapat menemukan teks";
	TOO_MANY_TRANS_REQUESTS = L"Terlalu banyak permintaan terjemahan: menolak untuk menerjemahkan";
	TRANSLATION_ERROR = L"Terjadi kesalahan ketika menerjemahkan";
	EXTRA_WINDOW_INFO = u8R"(Klik kanan untuk merubah pengaturan
Klik dan tarik pinggiran jendela untuk memindahkan, atau sudut kanan bawah untuk mengatur ukuran jendela)";
	BG_COLOR = u8"Warna latar";
	TEXT_COLOR = u8"Warna teks";
	TOPMOST = u8"Selalu berada di atas";
	REGEX_FILTER = u8"Filter regex";
	INVALID_REGEX = u8"Regex tidak sesuai";
	CURRENT_FILTER = u8"Regex yang digunakan sekarang: %1";
#endif // INDONESIAN

#ifdef ITALIAN
	NATIVE_LANGUAGE = "Italian";
	ATTACH = u8"Collega al gioco";
	LAUNCH = u8"Avvia gioco";
	DETACH = u8"Scollega dal gioco";
	FORGET = u8"Dimentica gioco";
	ADD_HOOK = u8"Aggiungi gancio";
	REMOVE_HOOKS = u8"Rimuovi gancio/ci";
	SAVE_HOOKS = u8"Salva gancio/ci";
	SEARCH_FOR_HOOKS = u8"Ricerca ganci";
	SETTINGS = u8"Impostazioni";
	EXTENSIONS = u8"Estenzioni";
	SELECT_PROCESS = u8"Seleziona processo";
	ATTACH_INFO = u8R"(Se non vedi il processo che desideri allefare, prova ad eseguire come amministratore
Puoi anche digitare l'ID del processo)";
	SELECT_PROCESS_INFO = u8"Se digiti manualmente il nome file del processo, si prega di utilizzare il percorso assoluto";
	FROM_COMPUTER = u8"Seleziona dal computer";
	PROCESSES = u8"Processi (*.exe)";
	SAVE_SETTINGS = u8"Salva impostazioni";
	EXTEN_WINDOW_INSTRUCTIONS = u8R"(Per aggiugnere un estenzione, clicca con il tasto destro la lista estenzioni
Alternativamente, trascina e rilascia il file estenzione dal tuo computer
Per riordinare le estenzioni, trascinali dentro la lista
(le estenzioni sono usate dall'alto verso il basso: l'ordine è IMPORTANTE)
Per rimuovere un estenzione, selezionala e premi rimuovi)";
	ADD_EXTENSION = u8"Aggiungi estenzione";
	INVALID_EXTENSION = u8"%1 è un estenzione non valida";
	CONFIRM_EXTENSION_OVERWRITE = u8"Un'altra versione di questa estenzione esiste già, desidera cancellarla e sovvrascriverla?";
	EXTENSION_WRITE_ERROR = u8"Impossibile salvare l'estenzione";
	USE_JP_LOCALE = u8"Emulare l'impostazione locale giapponese?";
	HOOK_SEARCH_UNSTABLE_WARNING = u8"Cercare i ganci è instabile! Preparati a un crash del tuo gioco!";
	SEARCH_CJK = u8"Cerca per Cinese/Giapponese/Coreano";
	SEARCH_PATTERN = u8"Cerca schema (matrice byte in esa)";
	SEARCH_DURATION = u8"Cerca durata (ms)";
	SEARCH_MODULE = u8"Cerca dentro il modulo";
	PATTERN_OFFSET = u8"Offset dall'inizio dello schema";
	MAX_HOOK_SEARCH_RECORDS = u8"Limite risultati di ricerca";
	MIN_ADDRESS = u8"Indirizzo minimo (esa)";
	MAX_ADDRESS = u8"Indirizzo massimo (esa)";
	STRING_OFFSET = u8"Offset stringa (esa)";
	HOOK_SEARCH_FILTER = u8"I risultati devono combaciare con questa espreressione regolare";
	TEXT = u8"Testo";
	CODEPAGE = u8"Codepage";
	SEARCH_FOR_TEXT = u8"Cerca per un testo specifico";
	START_HOOK_SEARCH = u8"Avvia ricerca gancio";
	SAVE_SEARCH_RESULTS = u8"Salva i risultati ricerca";
	TEXT_FILES = u8"Testo (*.txt)";
	DOUBLE_CLICK_TO_REMOVE_HOOK = u8"Doppio click su un gancio per rimuoverlo";
	FILTER_REPETITION = u8"Filtro ripetizione";
	AUTO_ATTACH = u8"Allega automaticamente";
	ATTACH_SAVED_ONLY = u8"Allega automaticamente (solamente salvato)";
	SHOW_SYSTEM_PROCESSES = u8"Mostra i processi di sistema";
	DEFAULT_CODEPAGE = u8"Codepage di base";
	FLUSH_DELAY = u8"Ritardo flush";
	MAX_BUFFER_SIZE = u8"Massima dimensione buffer";
	MAX_HISTORY_SIZE = u8"Massima dimensione cronologia";
	CONSOLE = L"Console";
	CLIPBOARD = L"Appunti";
	ABOUT = L"Textractor " ARCH L" v" VERSION LR"( creato da me: Artikash (email: akashmozumdar@gmail.com)
Pagina principale del progetto: https://github.com/Artikash/Textractor
Video tutorial: https://tinyurl.com/textractor-tutorial
Contattatemi per ogni problema, richiesta futura, o domande legate a Textractor
Puoi farlo attraverso la pagina principale del progetto (sezione issues) o via email
Il codice sorgente è disponibile sotto il GPLv3 nella pagina principale
Al momento sono in cerca di un nuovo lavoro: contattatemi per email se conoscete qualcuno che ingaggia periti informatici statunitensi
Se ti piace questo progetto, parlane con tutti per favore :))";
	CL_OPTIONS = LR"(utilizzo: Textractor [-p{process id|"process name"}]...
esempio: Textractor -p4466 -p"My Game.exe" sta tentando di inniettare i processi con l'ID 4466 o con il nome My Game.exe)";
	UPDATE_AVAILABLE = L"Aggiornamento disponibile: scaricala da https://github.com/Artikash/Textractor/releases";
	ALREADY_INJECTED = L"Textractor: già inniettato";
	NEED_32_BIT = L"Textractor: incompatibilità di architettura: solo Textractor x86 può inniettare questo processo";
	NEED_64_BIT = L"Textractor: incompatibilità di architettura: solo Textractor x64 può inniettare questo processo";
	INJECT_FAILED = L"Textractor: impossibile inniettare";
	LAUNCH_FAILED = L"Textractor: impossibile avviare";
	INVALID_CODE = L"Textractor: codice invalido";
	INVALID_CODEPAGE = L"impossibile convertire il testo (codepage invalido?)";
	PIPE_CONNECTED = u8"Textractor: tubo connesso";
	INSERTING_HOOK = u8"Textractor: aggiungi gancio: %s";
	REMOVING_HOOK = u8"Textractor: rimuovi gancio: %s";
	HOOK_FAILED = u8"Textractor: inserimento gancio non riuscito";
	TOO_MANY_HOOKS = u8"Textractor: troppi ganci: impossibile inserirli";
	STARTING_SEARCH = u8"Textractor: avvia la ricerca";
	NOT_ENOUGH_TEXT = u8"Textractor: testo insufficente per la ricerca accurata";
	HOOK_SEARCH_INITIALIZED = u8"Textractor: ricerca inizializzata con %zd ganci";
	HOOK_SEARCH_FINISHED = u8"ricerca ganci conclusa, %d risultati trovati";
	OUT_OF_RECORDS_RETRY = u8"registri di ricerca esauriti, riprova se i risultati sono scarsi (conto registri di base aumentato)";
	FUNC_MISSING = u8"Textractor: funzione non presente";
	MODULE_MISSING = u8"Textractor: modulo non presente";
	GARBAGE_MEMORY = u8"Textractor: memoria è in costante cambiamento, inutila la lettura";
	SEND_ERROR = u8"Textractor: Send ERROR (probabilmente un H-code incorretto)";
	READ_ERROR = u8"Textractor: Reader ERROR (probabilmente un R-code incorretto)";
	HIJACK_ERROR = u8"Textractor: Hijack ERROR";
	COULD_NOT_FIND = u8"Textractor: impossibile trovare il testo";
	TOO_MANY_TRANS_REQUESTS = L"Troppe richieste di traduzione: rifiuta per farne altre";
	TRANSLATION_ERROR = L"Errore durante la traduzione";
	EXTRA_WINDOW_INFO = u8R"(Tasto destro per cambiare le impostazioni
Clicca e trascina i bordi della finestra per muoverla, oppure nell'angolo in basso a destra per ridimensionare)";
	TOPMOST = u8"Sempre in primo piano";
	DICTIONARY = u8"Dizionario";
	SHOW_ORIGINAL = u8"Testo originale";
	SHOW_ORIGINAL_INFO = u8R"(Testo originale non sarà mostrato
Funziona solo se questa estenzione è usata direttamente dopo un'estensione di traduzione)";
	SIZE_LOCK = u8"Size lock";
	BG_COLOR = u8"Colore dello sfondo";
	TEXT_COLOR = u8"Colore del testo";
	TEXT_OUTLINE = u8"Contorno del testo";
	OUTLINE_COLOR = u8"Colore del contorno";
	OUTLINE_SIZE = u8"Dimensione del contorno";
	OUTLINE_SIZE_INFO = u8"Dimensione in pixel (consigliato di rimanere sotto il 20% della dimensione del font)";
	FONT = u8"Font";
	LUA_INTRO = u8R"(--[[
ProcessSentence è chiamato ogni volta che Textractor riceva una sentenza di testo.

Param sentence: sentenza ricevuta da Textractor (UTF-8).
Param sentenceInfo: tavola di informazioni miste sulla sentenza.

Se fai il return di una stringa, la sentenza di trasformera in quella stringa.
Se fai il return di nulla, la sentenza non sarà modificata.

Questa estenzione utilizza diverse copie dell'interprete Lua per la sicurezza del thread.
Modifiche alle variabili globali da ProcessSentence non sono garantite di persistere.

Proprietà in sentenceInfo:
"current select": 0 a meno che la sentenza è nel thread di testo attualmente scelto dall'utente.
"process id": id del processo che da cui proviene la sentenza. 0 per console e per appunti.
"text number": numero dell'attuale thread di testo. Conta uno ad uno quando i thread di testo sono creati. 0 per console, 1 per appunti.
--]]
function ProcessSentence(sentence, sentenceInfo)
  --Tuo codice qui...
end)";
	LOAD_LUA_SCRIPT = u8"Carica script";
	LUA_ERROR = L"Errore Lua: %s";
	REGEX_FILTER = u8"Filtro regex";
	INVALID_REGEX = u8"Regex non valido";
	CURRENT_FILTER = u8"Filtraggio attuale: %1";
	REPLACER_INSTRUCTIONS = LR"(Questo file fa qualcosa solo quando l'estenzione "Replacer" è utilizzata.
I comandi di rimpiazzo devono essere formattati cosi:
|ORIG|testo_originale|BECOMES|testo_sostituito|END|
Tutto il testo in questo file all'infuori di un comando di rimpiazzo è ignorato.
La spaziatura nel testo_originale è ignorato, ma testo_sostituito può contenere spaziature, ritorni a capo, ecc.
Questo file deve essere codificato in Unicode (UTF-16 Little Endian).)";
	THREAD_LINKER = u8"Thread Linker";
	LINK = u8"Collegamento";
	THREAD_LINK_FROM = u8"Numero di thread da cui collegarsi";
	THREAD_LINK_TO = u8"Numero di thread a cui collegarsi";
	HEXADECIMAL = u8"Esadecimale";
#endif // ITALIAN

#ifdef PORTUGUESE
	NATIVE_LANGUAGE = "Portuguese";
	ATTACH = u8"Anexar ao Jogo";
	LAUNCH = u8"Iniciar Jogo";
	DETACH = u8"Desconectar do Jogo";
	ADD_HOOK = u8"Adicionar um Hook";
	SAVE_HOOKS = u8"Salvar Hook(s)";
	SETTINGS = u8"Opções";
	EXTENSIONS = u8"Extensões";
	SELECT_PROCESS = u8"Selecionar Processo";
	ATTACH_INFO = u8R"(Se você não encontrar o processo o qual deseja anexar a, tente iniciar com permissão de Administrador. Você também pode digitar a ID do processo)";
	FROM_COMPUTER = u8"Busque no Computador";
	PROCESSES = u8"Executaveis (*.exe)";
	SAVE_SETTINGS = u8"Salvar opções";
	EXTEN_WINDOW_INSTRUCTIONS = u8R"(Arraste e solte a extensão (.dll) aqui para adicioná-la.
(Não funciona se estiver rodando como Administrador)
Arraste e solte dentro da lista para reordená-la.
(As extensões são utilizadas de cima para baixo: a ORDEM IMPORTA.)
Pressione delete com uma extensão selecionada para removê-la.)";
	INVALID_EXTENSION = u8"%1 não é uma extensão válida.";
	CONFIRM_EXTENSION_OVERWRITE = u8"Outra versão dessa extensão já existe, você gostaria de deletar e reescrevê-la?";
	EXTENSION_WRITE_ERROR = u8"Falha na gravação da extensão";
	USE_JP_LOCALE = u8"Emular o idioma Japonês?";
	SHOW_SYSTEM_PROCESSES = u8"Mostrar Processos do sistema";
	DEFAULT_CODEPAGE = u8"página de código padrão";
	FLUSH_DELAY = u8"Delay do Flush";
	MAX_BUFFER_SIZE = u8"Tamanho Máximo do Buffer";
	MAX_HISTORY_SIZE = u8"Tamanho Máximo do Histórico";
	CONSOLE = L"Terminal";
	CLIPBOARD = L"Área de Transferência";
	ABOUT = L"Textractor " ARCH L" v" VERSION LR"( Feito por mim: Artikash (e-mail: akashmozumdar@gmail.com)
Homepage do Projeto: https://github.com/Artikash/Textractor
Vídeo Tutorial: https://tinyurl.com/textractor-tutorial
Por favor, em caso de problemas, requisição de recurso e/ou funções e de dúvidas, entrar em contato comigo. Use o Inglês para se comunicar.
Você pode fazê-lo por meio da Homepage do Projeto (na aba "Issues") ou via E-mail.
O código-fonte se encontra disponível na Homepage do projeto sob a licença GPLv3.
Se você gostou desse projeto, divulgue a todos :))";
	UPDATE_AVAILABLE = L"Atualização disponível: baixe em https://github.com/Artikash/Textractor/releases";
	ALREADY_INJECTED = L"Textractor: já está injetado";
	NEED_32_BIT = L"Textractor: arquitetura errada: apenas o Textractor x86 pode injetar neste processo";
	NEED_64_BIT = L"Textractor: arquitetura errada: apenas o Textractor x64 pode injetar neste processo";
	INJECT_FAILED = L"Textractor: não pode injetar";
	LAUNCH_FAILED = L"Textractor: não pode iniciar";
	INVALID_CODE = L"Textractor: código inválido";
	INVALID_CODEPAGE = L"Textractor: não pode converter o texto (página de código inválida?)";
	PIPE_CONNECTED = u8"Textractor: pipe conectado";
	INSERTING_HOOK = u8"Textractor: inserindo hook: %s";
	REMOVING_HOOK = u8"Textractor: removendo hook: %s";
	HOOK_FAILED = u8"Textractor: falha na inserção do hook";
	TOO_MANY_HOOKS = u8"Textractor: há hooks de mais: não é possível inserir mais";
	STARTING_SEARCH = u8"Textractor: iniciando busca ";
	NOT_ENOUGH_TEXT = u8"Textractor: não há texto suficiente para uma buscar precisa";
	HOOK_SEARCH_INITIALIZED = u8"Textractor: busca inicializada com %zd hooks";
	HOOK_SEARCH_FINISHED = u8"Textractor: busca por hooks finalizada, %d resultados encontrados";
	FUNC_MISSING = u8"Textractor: função não encontrada";
	MODULE_MISSING = u8"Textractor: módulo não presente";
	SEND_ERROR = u8"Textractor: ERRO no envio (provavelmente um H-code incorreto)";
	READ_ERROR = u8"Textractor:  ERRO na leitura (provavelmente um R-code incorreto)";
	COULD_NOT_FIND = u8"Textractor: não foi possível encontrar texto";
	TOO_MANY_TRANS_REQUESTS = L"Foram feitos pedidos de tradução demais: recusa na feitura de mais pedidos";
	TRANSLATION_ERROR = L"Erro enquanto traduzindo";
	EXTRA_WINDOW_INFO = u8R"(Clique com o botão direito para mudar as opções
Clique e arraste nas beiradas da janela para mover, ou no canto inferior direito para redimessionar)";
	TOPMOST = u8"Sempre em cima";
	SHOW_ORIGINAL = u8"Texto original";
	SHOW_ORIGINAL_INFO = u8R"(Texto original não será mostrado
Apenas funciona se essa extensão for usada diretamente após uma extensão de tradução)";
	SIZE_LOCK = u8"Travar o Tamanho";
	BG_COLOR = u8"Cor de fundo";
	TEXT_COLOR = u8"Cor do Texto";
	FONT = u8"Fonte";
	REGEX_FILTER = u8"Fíltro regex";
	INVALID_REGEX = u8"Regex inválido";
	CURRENT_FILTER = u8"Atualmente filtrando: %1";
	REPLACER_INSTRUCTIONS = LR"(Este arquivo apenas faz algo quando a extensão "Replacer" está sendo utilizada.
Comandos de substituição devem ser formatos da seguinte maneira:
|ORIG|texto_original|BECOMES|texto_substituido|END|
Todo texto fora de um comando de substituição é ignorado.
Espaços contidos no texto original serão ignorados, mas o texto substituído pode conter espaços, novas línhas, etc.
Esse arquívo deve ser codifícado em (UTF-16 little endian).)";
	THREAD_LINKER = u8"Ligador de Threads";
	LINK = u8"Ligar";
	THREAD_LINK_FROM = u8"Número do thread para ligar de";
	THREAD_LINK_TO = u8"Número do thread para ligar para";
#endif // PORTUGUESE

#ifdef THAI
	NATIVE_LANGUAGE = "Thai";
	ATTACH = u8"เชื่อมเกม";
	LAUNCH = u8"เริ่มเกม";
	DETACH = u8"ยกเลิกการเชื่อม";
	ADD_HOOK = u8"เพิ่มตัวเกี่ยว";
	SAVE_HOOKS = u8"บันทึกตัวเกี่ยว";
	SETTINGS = u8"ตั่งค่า";
	EXTENSIONS = u8"ส่วนขยาย";
	SELECT_PROCESS = u8"เลือก process";
	ATTACH_INFO = u8R"(ถ้าไม่สามารถเลือก process ที่ต้องการจะเชื่อม, ลองเปิดโปรแกรมโดยให้สิทธิผู้ดูแลระบบ)";
	FROM_COMPUTER = u8"เลือกจากเครื่องของคุณ";
	PROCESSES = u8"Process(ระบบดำเนินการ) (*.exe)";
	SAVE_SETTINGS = u8"บันทึกการตั่งค่า";
	EXTEN_WINDOW_INSTRUCTIONS = u8R"(เพื่อที่จะเพิ่มส่วนขยาย คลิกขวาที่ตารางส่วนขยาย หรือ ลากและวางส่วนขยายจากคอมพิวเตอร์ของคุณ, ถ้าหากต้องการเรียงส่วนขยาย ลากและวางข้อมูลภายในตารางเพื่อเรียง ส่วนขยายมีลำดับการแสดงผลจากบนลงล่าง)";
	USE_JP_LOCALE = u8"ต้องการรันในระบบปฏิบัติการญีั่ปุุ่นหรือไม่?";
	DEFAULT_CODEPAGE = u8"หน้าโปรแกรมเดิม";
	FLUSH_DELAY = u8"ช่่วงระหว่างการล้างข้อมูล";
	MAX_BUFFER_SIZE = u8"ขนาดที่พักข้อมูลสูงสุด";
	CONSOLE = L"แผงควบคุม";
	CLIPBOARD = L"ข้อมูลชั่วคราว";
	ABOUT = L"Textractor " ARCH L" v" VERSION LR"( ได้ถูกพัฒนาโดย: Artikash (email: akashmozumdar@gmail.com)
หน้าเว็บไซต์หลัก: https://github.com/Artikash/Textractor
วีดีโอสอนวิถีใช้: https://tinyurl.com/textractor-tutorial
ถ้าหากพบเจอปัญหาสามารถติดต่อมาได้ รวมไปถึงการแนะนำฟังก์ชั้นที่อยากให้มี หรือ คำถามเกี่ยวกับโปรแกรม Textractor สามารถติดต่อ
ผ่านหน้าเว็บไซต์หลักผ่านทางหน้า Issue หรือทางอีเมลล์
Source code สามารถหาได้จากส่วนของ GPLv3 ที่หน้าหลักของเว็บไซต์)";
	UPDATE_AVAILABLE = L"มีอัพเดทใหม่ : สามารถดาวน์โหลดได้จาก https://github.com/Artikash/Textractor/releases";
	ALREADY_INJECTED = L"Textractor: ได้ถูกเชื่อมแล้ว";
	NEED_32_BIT = L"ระบบปฏิบัติการ Textractor ไม่ถูกต้อง : เฉพาะ Textractor x86 เท่านั่นสามารถเชื่อม Process นี้ได้";
	NEED_64_BIT = L"ระบบปฏิบัติการ Textractor ไม่ถูกต้อง : เฉพาะ Textractor x64 เท่านั่นสามารถเชื่อม Process นี้ได้";
	INJECT_FAILED = L"Textractor: ไม่สามารถเชื่อมได้";
	LAUNCH_FAILED = L"Textractor: ไม่สามารถเริ่มได้";
	INVALID_CODE = L"Textractor: รหัสไม่ถูกต้อง";
	INVALID_CODEPAGE = L"Textractor: ไม่สามารถปรับตัวอักษรได้ (Codepage ไม่ถูกต้อง?)";
	PIPE_CONNECTED = u8"Textractor: เชื่อมต่อกับจุดเชื่อมข้อมูลแล้ว";
	INSERTING_HOOK = u8"Textractor: ติดตั่งตัวเชื่อม: %s";
	REMOVING_HOOK = u8"Textractor: ถอดตัวเชื่อม: %s";
	HOOK_FAILED = u8"Textractor: ใส่ตัวเชื่อมล้มเหลว";
	TOO_MANY_HOOKS = u8"Textractor: ตัวเชื่อมมากเกินไป: ไม่สามารถใส่ตัวเชื่อมได้";
	NOT_ENOUGH_TEXT = u8"Textractor: ข้อมูลตัวอักษรไม่มากพอที่จะค้นหาตัวเชื่อม";
	FUNC_MISSING = u8"Textractor: ไม่พบฟังก์ชั่น";
	MODULE_MISSING = u8"Textractor: ไม่พบ module";
	GARBAGE_MEMORY = u8"Textractor: ข้อมูลเปลี่ยนอย่างต่อเนื่อง ไม่สามารถอ่านได้";
	SEND_ERROR = u8"Textractor: Send ERROR (คาดว่าเป็นความผิดพลาดของ H-Code)";
	READ_ERROR = u8"Textractor: Reader ERROR (คาดว่าเป็นความผิดพลาดของ R-Code)";
	HIJACK_ERROR = u8"Textractor: Hijack ERROR";
	COULD_NOT_FIND = u8"Textractor: ไม่สามารถหาข้อมูลตัวอักษรได้";
	TOO_MANY_TRANS_REQUESTS = L"มีการเรียกขอมากเกินกำหนด : ปฏิเสธที่จะทำการขอคำแปลต่อ";
	TRANSLATION_ERROR = L"เกิดข้อผิดพลาดระหว่างการแปลภาษา";
	EXTRA_WINDOW_INFO = u8R"(คลิกขวาเพื่อที่จะตั่งค่า 
คลิกและลากทางขวาบนของหน้าต่างเพื่อควบคุมหน้าต่าง หรือ ขวาล่างเพื่อที่จะปรับขนาด)";
	BG_COLOR = u8"สีพื่นหลัง";
	TEXT_COLOR = u8"สีตัวอักษร";
	TOPMOST = u8"หน้าต่างอยู่บนโปรแกรมอื่น";
	SHOW_ORIGINAL = u8"ข้อความดังเดิมก่อนแปลภาษา";
	SIZE_LOCK = u8"ปรับให้ไม่สามารถเปลี่ยนขนาดได้";
	FONT = u8"ฟ้อนต์";
#endif // THAI

#ifdef KOREAN
	NATIVE_LANGUAGE = "Korean";
	ATTACH = u8"게임에 부착";
	LAUNCH = u8"게임 실행";
	DETACH = u8"게임에서 탈착";
	FORGET = u8"게임 저장정보 삭제";
	ADD_HOOK = u8"후킹주소 추가";
	REMOVE_HOOKS = u8"후킹주소 삭제";
	SAVE_HOOKS = u8"후킹주소 저장";
	SEARCH_FOR_HOOKS = u8"후킹주소 찾기";
	SETTINGS = u8"설정";
	EXTENSIONS = u8"확장기능";
	SELECT_PROCESS = u8"프로세스 선택";
	ATTACH_INFO = u8R"(부착하려는 게임이 보이지 않는다면, 관리자 권한으로 실행해보세요. 프로세스 id를 입력 할 수도 있습니다.)";
	SELECT_PROCESS_INFO = u8"직접 프로세스파일 이름을 타이핑한다면, 정확한 경로를 입력하세요";
	FROM_COMPUTER = u8"컴퓨터로부터 선택";
	PROCESSES = u8"프로세스 (*.exe)";
	SAVE_SETTINGS = u8"설정 저장";
	EXTEN_WINDOW_INSTRUCTIONS = u8R"(확장기능을 추가하려면 리스트에서 오른쪽 클릭하거나 
		폴더에서 드래그하세요.
확장기능 순서를 변경하려면 리스트에서 드래그합니다.
(확장기능은 위부터 순서대로 작동합니다.)
확장기능을 삭제하려면 delete 를 누르세요.)";
	ADD_EXTENSION = u8"확장기능 추가";
	INVALID_EXTENSION = u8"%1 은 유효하지 않은 확장기능입니다.";
	CONFIRM_EXTENSION_OVERWRITE = u8"다른버전의 동일한 확장기능이 존재합니다. 덮어씌우시겠습니까?";
	EXTENSION_WRITE_ERROR = u8"확장기능을 저장하는데 실패하였습니다.";
	USE_JP_LOCALE = u8"일본어 로케일로 에뮬레이트합니까?";
	HOOK_SEARCH_UNSTABLE_WARNING = u8"후킹주소 찾기는 불안정합니다! 게임의 강제종료에 대비하세요!";
	SEARCH_CJK = u8"한국어/일본어/중국어 찾기";
	CODEPAGE = u8"코드페이지";
	SEARCH_FOR_TEXT = u8"특정 텍스트 찾기";
	START_HOOK_SEARCH = u8"주소찾기 시작";
	SAVE_SEARCH_RESULTS = u8"찾기결과 저장";
	DOUBLE_CLICK_TO_REMOVE_HOOK = u8"더블클릭으로 주소 제거";
	FILTER_REPETITION = u8"반복문 필터";
	AUTO_ATTACH = u8"자동 부착";
	ATTACH_SAVED_ONLY = u8"자동 부착 (저장된 게임만)";
	SHOW_SYSTEM_PROCESSES = u8"시스템 프로세스 보기";
	DEFAULT_CODEPAGE = u8"기본 코드페이지";
	FLUSH_DELAY = u8"플러시 딜레이";
	MAX_BUFFER_SIZE = u8"최대 버퍼 크기";
	MAX_HISTORY_SIZE = u8"최대 히스토리 크기";
	CONSOLE = L"콘솔";
	CLIPBOARD = L"클립보드";
	UPDATE_AVAILABLE = L"업데이트가 있습니다:https://github.com/Artikash/Textractor/releases";
	ALREADY_INJECTED = L"Textractor: 이미 부착되어 있습니다";
	NEED_32_BIT = L"Textractor: 아키텍쳐 불일치: Textractor x86을 사용해야 합니다";
	NEED_64_BIT = L"Textractor: 아키텍쳐 불일치: Textractor x64을 사용해야 합니다";
	INJECT_FAILED = L"Textractor: 부착할 수 없습니다";
	LAUNCH_FAILED = L"Textractor: 실행할 수 없습니다";
	INVALID_CODE = L"Textractor: 유효하지 않은 코드";
	INVALID_CODEPAGE = L"Textractor: 텍스트를 변환할 수 없습니다 (유효하지 않은 코드페이지?)";
	TOO_MANY_TRANS_REQUESTS = L"너무 많은 번역요청: 요청 거부됨";
	TRANSLATION_ERROR = L"번역 에러";
	EXTRA_WINDOW_INFO = u8R"(오른쪽 클릭으로 설정변경
드래그로 창 이동이 가능하고, 오른쪽 모서리에서 크기조절이 가능)";
	TOPMOST = u8"항상 위";
	SHOW_ORIGINAL = u8"원문";
	SHOW_ORIGINAL_INFO = u8R"(원문이 출력되지 않음
이 확장기능이 번역확장기능 이후에 사용될때만 동작함)";
	SIZE_LOCK = u8"사이즈 고정";
	BG_COLOR = u8"배경색";
	TEXT_COLOR = u8"글씨색";
	FONT = u8"폰트";
	REGEX_FILTER = u8"정규식 필터";
	INVALID_REGEX = u8"유효하지 않은 정규식";
	CURRENT_FILTER = u8"현재 필터중: %1";
	REPLACER_INSTRUCTIONS = LR"(이 파일은 "Replacer" 확장기능이 작동중일때만 사용됨.
Replacement commands는 아래 형식을 따라야 함:
|ORIG|original_text|BECOMES|replacement_text|END|
이 파일에서 replacement command 바깥의 텍스트는 무시됨.
original_text의 빈공간은 무시되지만, replacement_text는 공백과 엔터등을 포함 가능.
이 파일은 유니코드로 저장되어야만 함 (UTF-16 little endian).)";
#endif // KOREAN

#ifdef FRENCH
	const char* NATIVE_LANGUAGE = "French";
	const char* ATTACH = u8"Attacher le jeu";
	const char* LAUNCH = u8"Lancer le jeu";
	const char* GAME_CONFIG = u8"Configure le jeu";
	const char* DETACH = u8"Detacher du jeu";
	const char* FORGET = u8"Oublier le jeu";
	const char* ADD_HOOK = u8"Ajouter un hook";
	const char* REMOVE_HOOKS = u8"Enlever un hook(s)";
	const char* SAVE_HOOKS = u8"Sauvegarder un hook(s)";
	const char* SEARCH_FOR_HOOKS = u8"Rechercher des hooks";
	const char* SETTINGS = u8"Paramètres";
	const char* EXTENSIONS = u8"Extensions";
	const char* SELECT_PROCESS = u8"Selectionner le processus";
	const char* ATTACH_INFO = u8R"(Si vous ne voyez pas le processus que vous souhaitez joindre, essayez de l'exécuter avec les droits d'administrateur
Vous pouvez également saisir l'ID de processus)";
	const char* SELECT_PROCESS_INFO = u8"Si vous saisissez manuellement le nom du fichier de processus, veuillez utiliser le chemin exact";
	const char* FROM_COMPUTER = u8"Selectionner depuis l'ordinateur";
	const char* PROCESSES = u8"Processus (*.exe)";
	const char* CODE_INFODUMP = u8R"(Enter read code
R{S|Q|V|M}[null_length<][codepage#]@addr
OR
Enter hook code
H{A|B|W|H|S|Q|V|M}[F][null_length<][N][codepage#][padding+]data_offset[*deref_offset][:split_offset[*deref_offset]]@addr[:module[:func]]
All numbers except codepage/null_length in hexadecimal
Default codepage is 932 (Shift-JIS) but this can be changed in settings
A/B: codepage char little/big endian
W: UTF-16 char
H: Two hex bytes
S/Q/V/M: codepage/UTF-16/UTF-8/hex string
F: treat strings as full lines of text
N: don't use context
null_length: length of null terminator used for string
padding: length of padding data before string (C struct { int64_t size; char string[500]; } needs padding = 8)
Negatives for data_offset/split_offset refer to registers
-4 for EAX, -8 for ECX, -C for EDX, -10 for EBX, -14 for ESP, -18 for EBP, -1C for ESI, -20 for EDI
-C for RAX, -14 for RBX, -1C for RCX, -24 for RDX, and so on for RSP, RBP, RSI, RDI, R8-R15
* means dereference pointer+deref_offset)";
	const char* SAVE_SETTINGS = u8"Sauvergarder les paramètres";
	const char* EXTEN_WINDOW_INSTRUCTIONS = u8R"(Pour ajouter une extension, cliquez avec le bouton droit sur la liste des extensions
Vous pouvez également faire glisser et déposer le fichier d'extension depuis votre ordinateur
Pour réorganiser les extensions, faites-les glisser et déposez-les dans la liste
(Les extensions sont utilisées de haut en bas: l'ordre est IMPORTANT)
Pour supprimer une extension, sélectionnez-la et appuyez sur supprimer)";
	const char* ADD_EXTENSION = u8"Ajouter une extension";
	const char* INVALID_EXTENSION = u8"%1 C'est une extension invalide";
	const char* CONFIRM_EXTENSION_OVERWRITE = u8"Une autre version de cette extension existe déjà. Voulez-vous la supprimer et la remplacer?";
	const char* EXTENSION_WRITE_ERROR = u8"Impossible d'enregistrer l'extension";
	const char* USE_JP_LOCALE = u8"Émuler les paramètres régionaux japonais?";
	const char* FAILED_TO_CREATE_CONFIG_FILE = u8"Impossible de créer le fichier de configuration \"%1\"";
	const char* HOOK_SEARCH_UNSTABLE_WARNING = u8"La recherche de crochets est instable! Soyez prêt à ce que votre jeu plante!";
	const char* SEARCH_CJK = u8"Recher pour Chinois/Japonais/Coréen";
	const char* SEARCH_PATTERN = u8"Modèle de recherche (tableau d'octets hexadécimaux)";
	const char* SEARCH_DURATION = u8"Durée de la recherche(ms)";
	const char* SEARCH_MODULE = u8"Recherche sans module";
	const char* PATTERN_OFFSET = u8"Décalage par rapport au début du modèle";
	const char* MAX_HOOK_SEARCH_RECORDS = u8"Limite du résultat de la recherche";
	const char* MIN_ADDRESS = u8"Minimum d'adresses (hex)";
	const char* MAX_ADDRESS = u8"Maximum d'adresses (hex)";
	const char* STRING_OFFSET = u8"Décalage de la chaîne (hex)";
	const char* HOOK_SEARCH_FILTER = u8"Results must match this regex";
	const char* TEXT = u8"Texte";
	const char* CODEPAGE = u8"Code de page";
	const char* SEARCH_FOR_TEXT = u8"Rechercher un texte spécifique";
	const char* START_HOOK_SEARCH = u8"Lancer la recherche de hook";
	const char* SAVE_SEARCH_RESULTS = u8"Sauvergarder les résultats de la recherche";
	const char* TEXT_FILES = u8"Texte (*.txt)";
	const char* DOUBLE_CLICK_TO_REMOVE_HOOK = u8"Double click un hook pour l'enlever";
	const char* FILTER_REPETITION = u8"Répétition de filtre";
	const char* AUTO_ATTACH = u8"Attachement Automatique";
	const char* ATTACH_SAVED_ONLY = u8"Attachement Automatique(Sauvergardé seulement)";
	const char* SHOW_SYSTEM_PROCESSES = u8"Montrer les processus système";
	const char* DEFAULT_CODEPAGE = u8"Page de code de base";
	const char* FLUSH_DELAY = u8"Retard de vidage";
	const char* MAX_BUFFER_SIZE = u8"Taille maximale du tampon";
	const char* MAX_HISTORY_SIZE = u8"Taille d'historique maximale";
	const char* CONFIG_JP_LOCALE = u8"Lancement avec les paramètres régionaux JP";
	const wchar_t* CONSOLE = L"Console";
	const wchar_t* CLIPBOARD = L"Presse-papier";
	const wchar_t* ABOUT = L"Textractor " ARCH L" v" VERSION LR"( Fait par moi: Artikash (email: akashmozumdar@gmail.com)
Page d'acceuil du projet: https://github.com/Artikash/Textractor
Vidéo tuto: https://tinyurl.com/textractor-tutorial
FAQ: https://github.com/Artikash/Textractor/wiki/FAQ
Veuillez me contacter pour tout problème, demande de fonctionnalité ou question concernant Textractor
Vous pouvez le faire via la page d'accueil du projet (section problèmes) ou par e-mail
Code source disponible sous GPLv3 sur la page d'accueil du projet
Si vous aimez ce projet, parlez-en à tout le monde :))";
	const wchar_t* CL_OPTIONS = LR"(usage: Textractor [-p{process id|"process name"}]...
example: Textractor -p4466 -p"My Game.exe" tries to inject processes with id 4466 or with name My Game.exe)";
	const wchar_t* UPDATE_AVAILABLE = L"Mise à jour disponible: téléchargez-la depuis https://github.com/Artikash/Textractor/releases";
	const wchar_t* ALREADY_INJECTED = L"Textractor: déjà injecté";
	const wchar_t* NEED_32_BIT = L"Textractor: incompatibilité d'architecture: seul Textractor x86 peut injecter ce processus";
	const wchar_t* NEED_64_BIT = L"Textractor: incompatibilité d'architecture: seul Textractor x64 peut injecter ce processus";
	const wchar_t* INJECT_FAILED = L"Textractor: ne peut pas injecter";
	const wchar_t* LAUNCH_FAILED = L"Textractor: ne peut pas lancer";
	const wchar_t* INVALID_CODE = L"Textractor: code invalide";
	const wchar_t* INVALID_CODEPAGE = L"Textractor: impossible de convertir le texte (page de code non valide?)";
	const char* PIPE_CONNECTED = u8"Textractor: tuyau connecté";
	const char* INSERTING_HOOK = u8"Textractor: insertion du hook: %s";
	const char* REMOVING_HOOK = u8"Textractor: enlève le hook: %s";
	const char* HOOK_FAILED = u8"Textractor: n'a pas réussi à insérer un hook";
	const char* TOO_MANY_HOOKS = u8"Textractor: trop de hooks: impossible d'insérer";
	const char* STARTING_SEARCH = u8"Textractor: démarrage de la recherche";
	const char* NOT_ENOUGH_TEXT = u8"Textractor: pas assez de texte pour effectuer une recherche précise";
	const char* HOOK_SEARCH_INITIALIZED = u8"Textractor: la recherche a été initialisé avec %zd hooks";
	const char* MAKE_GAME_PROCESS_TEXT = u8"Textractor: veuillez cliquer dans le jeu pour le forcer à traiter le texte lors de la prochaine %d seconds";
	const char* HOOK_SEARCH_FINISHED = u8"Textractor: la recherche du hook est finie, %d results found";
	const char* OUT_OF_RECORDS_RETRY = u8"Textractor: hors des enregistrements de recherche, veuillez réessayer si les résultats sont médiocres (le nombre d'enregistrements par défaut a augmenté)";
	const char* FUNC_MISSING = u8"Textractor: function non présente";
	const char* MODULE_MISSING = u8"Textractor: module non présente";
	const char* GARBAGE_MEMORY = u8"Textractor: mémoire en constante évolution, inutile à lire";
	const char* SEND_ERROR = u8"Textractor: envoyer ERREUR (comme un H-code instable/incorrect)";
	const char* READ_ERROR = u8"Textractor: Lire ERREUR (comme un R-code incorrect)";
	const char* HIJACK_ERROR = u8"Textractor: ERREUR Hijack";
	const char* COULD_NOT_FIND = u8"Textractor: ne peut pas trouver le texte";
	const char* TRANSLATE_TO = u8"Traduire à";
	const char* TRANSLATE_SELECTED_THREAD_ONLY = u8"Traduire uniquement le thread sélectionné";
	const char* RATE_LIMIT_ALL_THREADS = u8"Taux limite tout les threads de texte";
	const char* RATE_LIMIT_SELECTED_THREAD = u8"Limite de débit du thread de texte sélectionné";
	const char* USE_TRANS_CACHE = u8"Utiliser le cache de traduction";
	const char* RATE_LIMIT_TOKEN_COUNT = u8"Nombre de tokens du limiteur de débit";
	const char* RATE_LIMIT_TOKEN_RESTORE_DELAY = u8"Délai de restauration du token du limiteur de débit (ms)";
	const wchar_t* TOO_MANY_TRANS_REQUESTS = L"Limite de taux dépassée: refus de faire plus de demande de traduction";
	const wchar_t* TRANSLATION_ERROR = L"Une erreur est survenue pendant la traduction";
	const char* USE_PREV_SENTENCE_CONTEXT = u8"Utiliser la phrase précédente comme contexte";
	const char* API_KEY = u8"API key";
	const char* EXTRA_WINDOW_INFO = u8R"(Clic droit pour modifier les paramètres
Cliquez et faites glisser sur les bords de la fenêtre pour vous déplacer ou dans le coin inférieur droit pour redimensionner)";
	const char* SENTENCE_TOO_BIG = u8"Phrase trop grande pour être affichée";
	const char* MAX_SENTENCE_SIZE = u8"Taille maximale de la phrase";
	const char* TOPMOST = u8"Toujours au dessus";
	const char* DICTIONARY = u8"Dictionnaire";
	const char* DICTIONARY_INSTRUCTIONS = u8R"(Ce fichier est utilisé uniquement pour la fonction "Dictionnaire" de l'extension Extra Window.
Il utilise un format personnalisé spécifique à Textractor et n'est pas destiné à être écrit manuellement.
Vous devriez rechercher un dictionnaire dans ce format en ligne (https://github.com/Artikash/Textractor-Dictionaries/releases est un bon point de dépar).
Alternativement, si vous êtes programmeur, vous pouvez écrire un script pour convertir un dictionnaire d'un autre format avec les informations ci-dessous.
Une fois que vous avez un dictionnaire, pour rechercher du texte dans Extra Window, survolez-le. Vous pouvez faire défiler toutes les définitions correspondantes.
Les definitions sont formattés comme ceci:|TERM|Hola<<ignored|TERM|hola|TERM|Bonjour|TERM|bonjour|DEFINITION|hello|END|
Le terme et la définition peuvent inclure du texte enrichi (https://doc.qt.io/qt-5/richtext-html-subset.html) qui sera correctement formaté.
Les inflexions sont formatées comme ceci:|ROOT|1<<noun|INFLECTS TO|(\w*)s|NAME| plural|END|
Textractor vérifiera si un terme correspond à l'expression rationnelle d'inflexion et si c'est le cas, recherchera récursivement le terme racine.
Le terme racine est généré en remplaçant chaque nombre par le groupe de capture regex correspondant (0 étant remplacé par la correspondance entière).
Ce processus peut facilement entraîner des boucles infinies et / ou des débordements de pile. C'est votre travail d'éviter cela.
L'expression regex d'inflexion utilise la syntaxe unicode QRegularExpression (https://doc.qt.io/qt-5/qregularexpression.html).
Textractor affichera le terme racine final ainsi que toutes les inflexions utilisées pour arriver à ce terme racine.
Cependant, le texte d'un terme après << est ignoré lors de l'affichage. Ceci est destiné à stocker des informations sur une partie de la parole.
Ce fichier doit être encodé en UTF-8.)";
	const char* SHOW_ORIGINAL = u8"Texte Original";
	const char* SHOW_ORIGINAL_INFO = u8R"(Le texte d'origine ne sera pas affiché
Fonctionne uniquement si cette extension est utilisée directement après une extension de traduction)";
	const char* SIZE_LOCK = u8"Verouiller la taille";
	const char* OPACITY = u8"Opacité";
	const char* BG_COLOR = u8"COuleur d'arrière-plan";
	const char* TEXT_COLOR = u8"COuleur du texte";
	const char* TEXT_OUTLINE = u8"Contour du texte";
	const char* OUTLINE_COLOR = u8"Couleur du contour";
	const char* OUTLINE_SIZE = u8"Taille du contour";
	const char* OUTLINE_SIZE_INFO = u8"Taille en pixels (recommandé de rester en dessous de 20% de la taille de la police)";
	const char* FONT = u8"Police";
	const char* LUA_INTRO = u8R"(--[[
ProcessSentence est appelée chaque fois que Textractor reçoit une phrase de texte.
Phrase param: phrase reçue par Textractor (UTF-8).
Param sentenceInfo: tableau d'informations diverses sur la phrase.
Si vous retournez une chaîne, la phrase sera transformée en cette chaîne.
Si vous renvoyez zéro, la phrase ne sera pas modifiée.
Cette extension utilise plusieurs copies de l'interpréteur Lua pour la sécurité des threads.
Les modifications apportées aux variables globales à partir de ProcessSentence ne sont pas garanties de persister.
Properties in sentenceInfo:
"current select": 0 unless sentence is in the text thread currently selected by the user.
"process id": process id that the sentence is coming from. 0 for console and clipboard.
"text number": number of the current text thread. Counts up one by one as text threads are created. 0 for console, 1 for clipboard.
--]]
function ProcessSentence(sentence, sentenceInfo)
  --Your code here...
end)";
	const char* LOAD_LUA_SCRIPT = u8"Charger le script";
	const wchar_t* LUA_ERROR = L"Erreur Lua: %s";
	const char* REGEX_FILTER = u8"Filtre regex";
	const char* INVALID_REGEX = u8"Regex invalide";
	const char* CURRENT_FILTER = u8"En train de filtrer: %1";
	const wchar_t* REPLACER_INSTRUCTIONS = LR"(Ce fichier ne fait rien lorsque l'extension "Replacer" est utilisée.
Les commandes de remplacement doivent être formatées comme:
|ORIG|original_text|BECOMES|replacement_text|END|
Tout le texte de ce fichier en dehors d'une commande de remplacement est ignoré.
Un caret (^) agit comme un caractère générique qui correspond à tout autre caractère unique.
Les espaces dans original_text sont ignorés, mais remplacement_text peut contenir des espaces, des nouvelles lignes, etc.
Ce fichier doit être encodé en Unicode (UTF-16 Little Endian).)";
	const char* THREAD_LINKER = u8"Lien du thread";
	const char* LINK = u8"Lien";
	const char* THREAD_LINK_FROM = u8"Nombre du thread du lien depuis";
	const char* THREAD_LINK_TO = u8"Nombre du thread du lien a";
	const char* HEXADECIMAL = u8"Hexadecimal";
#endif // FRENCH

#ifdef Vietnamese
       NATIVE_LANGUAGE = "Vietnamese";
       ATTACH = u8"Liên kết trò chơi";
       LAUNCH = u8"Khởi động trò chơi";
       GAME_CONFIG = u8"Cấu hình trò chơi";
       DETACH = u8"Tách khỏi trò chơi";
       FORGET = u8"Quên trò chơi";
       ADD_HOOK = u8"Thêm hook";
       REMOVE_HOOKS = u8"Xóa hook";
       SAVE_HOOKS = u8"Lưu hook";
       SEARCH_FOR_HOOKS = u8"Tiềm hook";
       SETTINGS = u8"Cài đặt";
       EXTENSIONS = u8"Tiện ích mở rộng";
       SELECT_PROCESS = u8"Chọn quy trình";
       ATTACH_INFO = u8R"(Nếu bạn không thấy process(tên game.exe) mà bạn muốn liên kết thì hãy thử 
chạy với quyền admin,bạn cũng có thể nhập trực tiếp process id vào)";       
       FROM_COMPUTER = u8"chọn từ máy tính";
       SELECT_PROCESS_INFO = u8"Nếu bạn nhập tên tệp process(tên game.exe)từ ổ cứng ,vui lòng sử dụng đường dẫn trực tiếp";
       FROM_COMPUTER = u8"Chọn từ máy tính";
       PROCESSES = u8"file mở game(*.exe)";
       SAVE_SETTINGS = u8"Lưu cài đặt";
       XTEN_WINDOW_INSTRUCTIONS = u8R"(Để thêm tiện ích mở rộng,nhấp chuột phải vào danh sách tiện ích mở rộng
ngoài ra bạn có thể sấp xếp và xóa hoặc thêm các tiện ích khác
(Tiện ích mở rộng được sử dụng từ trên xuống dưới: thứ tự DOES)
Để xóa tiện ích mở rộng, chọn tiện ích mở rộng và nhấn xóa
thêm các máy chủ dịch như google hoặc big(.dll) mở từ tệp Texttractor và dán vào đây 
và khi muốn xóa thì bạn hãy chỉ cần kéo nó ra khỏi danh sách tiện ích)";
       USE_JP_LOCALE = u8"Sử dụng jp_locale";
       ABOUT = L"Textractor " ARCH L" v" VERSION LR"( Được tạo bởi: Artikash (email: akashmozumdar@gmail.com)
Trang chủ dự án: https://github.com/Artikash/Textractor
video hướng dẫn: https://tinyurl.com/textractor-tutorial
FAQ: https://github.com/Artikash/Textractor/wiki/FAQ
Vui lòng liên hệ với Artikash khi bạn có bất kỳ vấn đề nào , yêu cầu tính năng hoặc câu hỏi liên quan đến Textractor
Bạn có thể làm như vậy thông qua trang chủ của dự án (issues section) hoặc qua email của anh ta 
Mã nguồn có sẵn theo GPLv3 tại trang chủ của dự án
Nếu bạn thích dự án này, xin vui lòng hãy cho mọi người biết :)) ";
       UPDATE_AVAILABLE = L"Cập nhật có sẵn:https://github.com/Artikash/Textractor/releases";
       ALREADY_INJECTED = L"Textractor: Đã có sẵn";
       NEED_32_BIT = L"Textractor: Kết cấu không khớp : chỉ Textractor x86 mới có thể thực hiện quá trình này ";
       NEED_64_BIT = L"Textractor: Kết cấu không khớp : chỉ Textractor x64 mới có thể thực hiện quá trình này ";
       LAUNCH_FAILED = L"Textractor: không thể khởi động ";
       INVALID_CODE = L"Textractor: mã không hợp lệ";
       INVALID_CODEPAGE = L"Textractor: không thể chuyển đổi văn bản (codepage không hợp lệ?)";
       INSERTING_HOOK = u8"Textractor: chèn hook: %s";
       REMOVING_HOOK = u8"Textractor: xóa hook: %s";
       HOOK_FAILED = u8"Textractor:không thể chèn hook";
       TOO_MANY_HOOKS = u8"Textractor:quá nhiều hook: không thể chèn ";
       STARTING_SEARCH = u8"Textractor:bắt đầu tìm kiếm ";
       NOT_ENOUGH_TEXT = u8"Textractor: không đủ văn bản để tìm kiếm ";
       SHOW_ORIGINAL = u8"Văn bản gốc";
       SHOW_ORIGINAL_INFO = u8R"(Văn bản gốc sẽ không được hiển thị
Chỉ hoạt động nếu tiện ích mở rộng này được sử dụng trực tiếp sau khi bổ sung phần dịch) ";
       SIZE_LOCK = u8"Khóa kích thước";
       OPACITY = u8"Độ mờ";
       BG_COLOR = u8"Màu nền";
       TEXT_COLOR = u8"màu chữ";
       
       
	
       

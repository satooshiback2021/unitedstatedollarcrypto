

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *unitedstatedollarcrypto_strings[] = {
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"An error occurred while setting up the RPC address %s port %u for listening: "
"%s"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Bind to given address to listen for JSON-RPC connections. Use [host]:port "
"notation for IPv6. This option can be specified multiple times (default: "
"bind to all interfaces)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Cannot obtain a lock on data directory %s. USD Coin Core is probably already "
"running."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Change automatic finalized budget voting behavior. mode=auto: Vote for only "
"exact finalized budget match to my generated budget. (string, default: auto)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Continuously rate-limit free transactions to <n>*1000 bytes per minute "
"(default:%u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Disable all USD Coin specific functionality (Masternodes, SwiftTX, "
"Budgeting) (0-1, default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Distributed under the MIT software license, see the accompanying file "
"COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Enable SwiftTX, show confirmations for locked transactions (bool, default: %s)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Enable spork administration functionality with the appropriate private key."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Enter regression test mode, which uses a special chain in which blocks can "
"be solved instantly."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Error: The transaction was rejected! This might happen if some of the coins "
"in your wallet were already spent, such as if you used a copy of wallet.dat "
"and coins were spent in the copy but not marked as spent here."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Error: This transaction requires a transaction fee of at least %s because of "
"its amount, complexity, or use of recently received funds!"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Error: Unsupported argument -checklevel found. Checklevel must be level 4."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Error: Unsupported argument -socks found. Setting SOCKS version isn't "
"possible anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Fees (in USD/Kb) smaller than this are considered zero fee for relaying "
"(default: %s)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Fees (in USD/Kb) smaller than this are considered zero fee for transaction "
"creation (default: %s)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Flush database activity from memory pool to disk log every <n> megabytes "
"(default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"If paytxfee is not set, include enough fee so transactions begin "
"confirmation on average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"In this mode -genproclimit controls how many blocks are generated "
"immediately."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Insufficient or insufficient confirmed funds, you might need to wait a few "
"minutes and try again."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Keep the specified amount available for spending at all times (default: 0)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Log transaction priority and fee per kB when mining blocks (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Maximum size of data in data carrier transactions we relay and mine "
"(default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Maximum total fees to use in a single wallet transaction, setting too low "
"may abort large transactions (default: %s)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Randomize credentials for every proxy connection. This enables Tor stream "
"isolation (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Require high priority for relaying free or low-fee transactions (default:%u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Send trace/debug info to console instead of debug.log file (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Set the number of threads for coin generation if enabled (-1 = all cores, "
"default: %d)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Show N confirmations for a successfully locked transaction (0-9999, default: "
"%u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Support filtering of blocks and transaction with bloom filters (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"SwiftTX requires inputs with at least 6 confirmations, you might need to wait "
"a few minutes and try again."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"staking or merchant applications!"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit <https://www.openssl.org/> and cryptographic software "
"written by Eric Young and UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"To use unitedstatedollarcryptod, or the -server option to unitedstatedollarcrypto-qt, you must set an rpcpassword "
"in the configuration file:\n"
"%s\n"
"It is recommended you use the following random password:\n"
"rpcuser=unitedstatedollarcryptorpc\n"
"rpcpassword=%s\n"
"(you do not need to remember this password)\n"
"The username and password MUST NOT be the same.\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions.\n"
"It is also recommended to set alertnotify so you are notified of problems;\n"
"for example: alertnotify=echo %%s | mail -s \"USD Coin Alert\" admin@foo.com\n"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Unable to bind to %s on this computer. USD Coin Core is probably already running."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Unable to locate enough funds for this transaction that are not equal 1000 "
"USD."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Warning: -maxtxfee is set very high! Fees this large could be paid on a "
"single transaction."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong USD Coin Core will not work properly."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Whitelist peers connecting from the given netmask or IP address. Can be "
"specified multiple times."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", ""
"You must specify a masternodeprivkey in the configuration. Please see "
"documentation for help."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "(3134 could be used only on mainnet)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "(default: %s)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "(default: 1)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "(must be 3134 for mainnet)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "<category> can be:"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Accept public REST requests (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Acceptable ciphers (default: %s)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Already have that input."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Attempt to force blockchain corruption recovery"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Automatically create Tor hidden service (default: %d)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Block creation options:"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Can't find random Masternode."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Cannot resolve -whitebind address: '%s'"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Collateral not valid."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Connection options:"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Copyright (C) 2009-%i The Bitcoin Core Developers"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Copyright (C) 2014-%i The Dash Core Developers"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Copyright (C) 2015-%i The PIVX Core Developers"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Copyright (C) 2017-%i The USD Coin Core Developers"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Could not parse -rpcbind value %s as network address"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Could not parse masternode.conf"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Delete blockchain folders and resync from scratch"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Disable OS notifications for incoming transactions (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Disable safemode, override a real safe mode event (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Display the stake modifier calculations in the debug.log file."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Display verbose coin stake messages in the debug.log file."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Done loading"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Enable publish hash block in <address>"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Enable publish hash transaction (locked via SwiftTX) in <address>"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Enable publish hash transaction in <address>"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Enable publish raw block in <address>"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Enable publish raw transaction (locked via SwiftTX) in <address>"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Enable publish raw transaction in <address>"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Enable staking functionality (0-1, default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Enable the client to act as a masternode (0-1, default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Entries are full."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Error connecting to Masternode."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Error loading block database"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Error loading wallet.dat: Wallet requires newer version of USD Coin Core"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Error opening block database"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Error recovering public key."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Error"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Error: A fatal internal error occured, see debug.log for details"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Error: Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Error: Wallet locked, unable to create transaction!"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Failed to read block index"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Failed to read block"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Failed to write block index"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Fee (in USD/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Finalizing transaction."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Force safe mode (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Found enough users, signing ( waiting %s )"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Found enough users, signing ..."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Generate coins (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "If <category> is not supplied, output all debugging information."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Importing..."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Imports blocks from external blk000??.dat file"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Incompatible mode."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Incompatible version."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Information"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Initialization sanity check failed. USD Coin Core is shutting down."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Input is not valid."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Insufficient funds."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Invalid -onion address or hostname: '%s'"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Invalid -proxy address or hostname: '%s'"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Invalid amount for -maxtxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Invalid amount for -minrelaytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Invalid amount for -mintxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Invalid amount for -reservebalance=<amount>"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Invalid amount"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Invalid masternodeprivkey. Please see documenation."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Invalid port detected in masternode.conf"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Invalid private key."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Invalid script detected."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Limit size of signature cache to <n> entries (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Line: %d"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Loading block index..."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Loading budget cache..."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Loading masternode cache..."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Loading masternode payment cache..."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Loading sporks..."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Loading wallet... (%3.2f %%)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Lock is already in place."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Lock masternodes from masternode configuration file (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Maintain at most <n> connections to peers (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Masternode options:"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Masternode queue is full."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Masternode:"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Missing input transaction information."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "No Masternodes detected."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "No compatible Masternode found."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Node relay options:"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Non-standard public key detected."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Not compatible with existing transactions."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Not in the Masternode list."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Number of automatic wallet backups (default: 10)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Only accept block chain matching built-in checkpoints (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Options:"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Preparing for resync..."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Print version and exit"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "RPC SSL options: (see the Bitcoin Wiki for SSL setup instructions)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "RPC server options:"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "RPC support for HTTP persistent connections (default: %d)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Randomly drop 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Randomly fuzz 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Rebuild block chain index from current blk000??.dat files"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Receive and display P2P network alerts (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Rescanning..."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Run a thread to flush wallet periodically (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Send transactions as zero-fee transactions if possible (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Server certificate file (default: %s)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Server private key (default: %s)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Session not complete!"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Session timed out."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Set external address:port to get to this masternode (example: %s)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Set minimum block size in bytes (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Set the Maximum reorg depth (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Set the masternode private key"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Sets the DB_PRIVATE flag in the wallet db environment (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Signing failed."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Signing timed out."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Specify data directory"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Specify masternode configuration file (default: %s)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Staking options:"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Stop running after importing blocks from disk (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Submitted following entries to masternode: %u / %d"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Submitted to masternode, waiting for more entries ( %u / %d ) %s"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Submitted to masternode, waiting in queue %s"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "SwiftTX options:"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Synchronization failed"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Synchronization finished"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Synchronization pending..."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Synchronizing budgets..."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Synchronizing masternode winners..."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Synchronizing masternodes..."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Synchronizing sporks..."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "This help message"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "This is experimental software."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "This is intended for regression testing tools and app development."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "This is not a Masternode."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Tor control port password (default: empty)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Tor control port to use if onion listening enabled (default: %s)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Transaction created successfully."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Transaction fees are too high."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Transaction not valid."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Transaction too large"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Transmitting final transaction."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Unable to sign spork message, wrong key?"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Unknown state: id = %u"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Use OpenSSL (https) for JSON-RPC connections"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Use a custom max chain reorganization depth (default: %u)"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Use the test network"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Verifying wallet..."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Wallet is locked."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Wallet needed to be rewritten: restart USD Coin Core to complete"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Wallet options:"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Wallet window title"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Warning"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Warning: Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Warning: Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Will retry..."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "You need to rebuild the database using -reindex to change -txindex"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Your entries added successfully."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Your transaction was accepted into the pool!"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "ZeroMQ notification options:"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "on startup"),
QT_TRANSLATE_NOOP("unitedstatedollarcrypto-core", "wallet.dat corrupt, salvage failed"),
};

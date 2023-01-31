#ifndef HASP_LANG_NL_NL_H
#define HASP_LANG_NL_NL_H

#define D_ISO_LANG_CODE "nl-NL"

#define D_USERNAME "Gebruikersnaam:"
#define D_PASSWORD "Wachtwoord:"
#define D_SSID "Ssid:"
#define D_YES "Ja"
#define D_NO "Nee"

#define D_ERROR_OUT_OF_MEMORY "Geen geheugen bechikbaar"
#define D_ERROR_UNKNOWN "Onbekende fout"

#define D_CONFIG_NOT_CHANGED "Instellingen ongewijzigd"
#define D_CONFIG_CHANGED "Instellingen gewijzigd"
#define D_CONFIG_LOADED "Instellingen geladen"

#define D_FILE_LOADING "%s laden..."
#define D_FILE_LOADED "%s geladen"
#define D_FILE_LOAD_FAILED "%s laden mislukt"
#define D_FILE_SAVING "%s bewaren..."
#define D_FILE_SAVED "%s bewaard"
#define D_FILE_SAVE_FAILED "%s bewaren mislukt"
#define D_FILE_NOT_FOUND "Bestand niet gevonden"
#define D_FILE_SIZE_BYTES "bytes"
#define D_FILE_SIZE_KILOBYTES "KiB"
#define D_FILE_SIZE_MEGABYTES "MiB"
#define D_FILE_SIZE_GIGABYTES "GiB"
#define D_FILE_SIZE_DIVIDER 1024 //  kibi or kilo bytes
#define D_DECIMAL_POINT ","      //  decimal comma or point

#define D_SETTING_ENABLED "Ingeschakeld"
#define D_SETTING_DISABLED "Uitgeschakeld"
#define D_SETTING_DEFAULT "Standaard"

#define D_SERVICE_STARTING "Starten..."
#define D_SERVICE_STARTED "Gestart"
#define D_SERVICE_START_FAILED "Starten mislukt"
#define D_SERVICE_STOPPED "Gestopt"
#define D_SERVICE_DISABLED "Uitgeschakeld"
#define D_SERVICE_CONNECTED "Verbonden"
#define D_SERVICE_DISCONNECTED "Verbroken"

#define D_NETWORK_IP_ADDRESS_RECEIVED "IP adres %s ontvangen"
#define D_NETWORK_ONLINE "online"
#define D_NETWORK_OFFLINE "offline"
#define D_NETWORK_CONNECTION_FAILED "Verbinding mislukt"
#define D_NETWORK_CONNECTION_UNAUTHORIZED "Autorisatie mislukt"

#define D_MQTT_DEFAULT_NAME "plaat_%s"
#define D_MQTT_CONNECTING "Verbinden..."
#define D_MQTT_CONNECTED "Verbonden met broker %s als clientID %s"
#define D_MQTT_NOT_CONNECTED "Niet verbonden ???"
#define D_MQTT_DISCONNECTING "Verbinding verbreken..."
#define D_MQTT_DISCONNECTED "Verbinding verbroken"
#define D_MQTT_RECONNECTING "Verbinding verbroken, opnieuw verbinden..."
#define D_MQTT_NOT_CONFIGURED "Broker niet ingesteld"
#define D_MQTT_STARTED "Gestart: %d bytes"
#define D_MQTT_FAILED "Mislukt:"
#define D_MQTT_INVALID_TOPIC "Boodschap met ongeldig onderwerp"
#define D_MQTT_SUBSCRIBED "Ingeschreven op %s"
#define D_MQTT_NOT_SUBSCRIBED "Inschrijving op %s mislukt"
#define D_MQTT_HA_AUTO_DISCOVERY "Registeren HA auto-configuratie"
#define D_MQTT_PAYLOAD_TOO_LONG "Payload is te lang (%u bytes)"

#define D_TELNET_CLOSING_CONNECTION "Sessie sluiten van %s"
#define D_TELNET_CLIENT_LOGIN_FROM "Client aangemeld van %s"
#define D_TELNET_CLIENT_CONNECT_FROM "Client verbonden van %s"
#define D_TELNET_CLIENT_NOT_CONNECTED "Client NIET verbonden"
#define D_TELNET_INCORRECT_LOGIN_ATTEMPT "Aanmelding van %s mislukt"
#define D_TELNET_STARTED "Telnet console gestart"
#define D_TELNET_FAILED "Telnet console starten is mislukt"
#define D_TELNET_CLIENT_CONNECTED "Client verbonden"
#define D_TELNET_CLIENT_REJECTED "Client geweigerd"

#define D_HASP_INVALID_PAGE "Ongeldige pagina %u"
#define D_HASP_INVALID_LAYER "Kan systeemlaag niet wissen"
#define D_HASP_CHANGE_PAGE "Pagina %u laden"
#define D_HASP_CLEAR_PAGE "Pagina %u wissen"

#define D_OBJECT_DELETED "Object verwijderd"
#define D_OBJECT_UNKNOWN "Onbekend object"
#define D_OBJECT_MISMATCH "Objecten komen niet overeen!"
#define D_OBJECT_LOST "Object kwijt!"
#define D_OBJECT_CREATE_FAILED "Object id %u aanmaken mislukt"
#define D_OBJECT_PAGE_UNKNOWN "Paginga %u niet gedefinieerd"
#define D_OBJECT_EVENT_UNKNOWN "Onbekend Event %d"

#define D_ATTRIBUTE_UNKNOWN "Onbekend attribuut %s"
// D_ATTRIBUTE_OBSOLETE D_ATTRIBUTE_INSTEAD can be used together or just D_ATTRIBUTE_OBSOLETE alone
#define D_ATTRIBUTE_OBSOLETE "%s is verouderd"
#define D_ATTRIBUTE_INSTEAD ", gebruik nu %s"
#define D_ATTRIBUTE_READ_ONLY "%s is alleen-lezen"
#define D_ATTRIBUTE_PAGE_METHOD_INVALID "%s is ongeldig voor een pagina"
#define D_ATTRIBUTE_ALIGN_INVALID "Ongeldig align attribuut: %s"
#define D_ATTRIBUTE_COLOR_INVALID "Ongeldige kleur: %s"
#define D_ATTRIBUTE_LONG_MODE_INVALID "Ongeldige long mode: %s"

#define D_OOBE_SSID_VALIDATED "SSID %s gevalideerd"
#define D_OOBE_AUTO_CALIBRATE "Auto calibratie actief"
#define D_OOBE_CALIBRATED "Reeds gecalibreerd"

#define D_DISPATCH_COMMAND_NOT_FOUND "Opdracht '%s' niet gevonden"
#define D_DISPATCH_INVALID_PAGE "Ongeldige pagina %s"
#define D_DISPATCH_REBOOT "De MCU wordt herstart!"

#define D_JSON_FAILED "JSON verwerking mislukt:"
#define D_JSONL_FAILED "JSONL verwerking mislukt op lijn %u"
#define D_JSONL_SUCCEEDED "Jsonl volledig verwerkt"

#define D_OTA_CHECK_UPDATE "Controle update URL: %s"
#define D_OTA_CHECK_COMPLETE "Update gecontroleerd"
#define D_OTA_CHECK_FAILED "Update controle mislukt: %s"
#define D_OTA_UPDATE_FIRMWARE "OTA Firmware bijwerken"
#define D_OTA_UPDATE_COMPLETE "OTA Firmware bijgewerkt"
#define D_OTA_UPDATE_APPLY "Firmware Schrijven & Herstart"
#define D_OTA_UPDATE_FAILED "OTA Update mislukt"
#define D_OTA_UPDATING_FIRMWARE "Firmware bijwerken..."
#define D_OTA_UPDATING_FILESYSTEM "Bestandsysteem bijwerken..."

#define D_HTTP_HASP_DESIGN "HASP Ontwerp"
#define D_HTTP_INFORMATION "Informatie"
#define D_HTTP_HTTP_SETTINGS "HTTP Instellingen"
#define D_HTTP_FTP_SETTINGS "FTP Instellingen"
#define D_HTTP_WIFI_SETTINGS "Wifi Instellingen"
#define D_HTTP_MQTT_SETTINGS "MQTT Instellingen"
#define D_HTTP_GPIO_SETTINGS "GPIO Instellingen"
#define D_HTTP_MDNS_SETTINGS "mDNS Instellingen"
#define D_HTTP_TELNET_SETTINGS "Telnet Instellingen"
#define D_HTTP_DEBUG_SETTINGS "Debug Instellingen"
#define D_HTTP_GUI_SETTINGS "Scherm Instellingen"
#define D_HTTP_SAVE_SETTINGS "Bewaar Instellingen"
#define D_HTTP_UPLOAD_FILE "Bestand Opladen"
#define D_HTTP_ERASE_DEVICE "Alle Instellingen Wissen"
#define D_HTTP_ADD_GPIO "Pin Toevoegen"
#define D_HTTP_BACK "Terug"
#define D_HTTP_REFRESH "Vernieuwen"
#define D_HTTP_PREV_PAGE "Vorige Pagina"
#define D_HTTP_NEXT_PAGE "Volgende Pagina"
#define D_HTTP_CALIBRATE "Calibratie"
#define D_HTTP_ANTIBURN "Inbranden Tegengaan"
#define D_HTTP_SCREENSHOT "Schermafbeelding"
#define D_HTTP_FILE_BROWSER "Bestandseditor"
#define D_HTTP_FIRMWARE_UPGRADE "Firmware Upgrade"
#define D_HTTP_UPDATE_FIRMWARE "Firmware Bijwerken"
#define D_HTTP_FACTORY_RESET "Fabrieksinstellingen"
#define D_HTTP_MAIN_MENU "Hoofdmenu"
#define D_HTTP_REBOOT "Herstarten"
#define D_HTTP_CONFIGURATION "Configuratie"
#define D_HTTP_CONFIG_CHANGED                                                                                          \
    "De configuratie is gewijzigd, klik op <a href='/reboot'>Herstart</a> om de wijzigingen naar flash te schrijven."
#define D_HTTP_SENDING_PAGE "Pagina %S verstuurd naar %s"
#define D_HTTP_FOOTER "door Francis Van Roie"

#define D_INFO_VERSION "Versie"
#define D_INFO_BUILD_DATETIME "Gecompileerd"
#define D_INFO_ENVIRONMENT "Omgeving"
#define D_INFO_UPTIME "Opgestart"
#define D_INFO_FREE_HEAP "Vrije Heap"
#define D_INFO_FREE_BLOCK "Vrije Blok"
#define D_INFO_DEVICE_MEMORY "Algemeen Geheugen"
#define D_INFO_LVGL_MEMORY "LVGL Geheugen"
#define D_INFO_TOTAL_MEMORY "Totaal"
#define D_INFO_FREE_MEMORY "Vrij"
#define D_INFO_FRAGMENTATION "Fragmentatie"
#define D_INFO_PSRAM_FREE "PSRam Vrij"
#define D_INFO_PSRAM_SIZE "PSRam Grootte"
#define D_INFO_FLASH_SIZE "Flash Grootte"
#define D_INFO_SKETCH_USED "Programma Gebruikt"
#define D_INFO_SKETCH_FREE "Programma Vrij"
#define D_INFO_FS_SIZE "Bestandssysteem Grootte"
#define D_INFO_FS_USED "Bestandssysteem Gebruikt"
#define D_INFO_FS_FREE "Bestandssysteem Vrij"
#define D_INFO_MODULE "Module"
#define D_INFO_MODEL "Model"
#define D_INFO_FREQUENCY "Frequentie"
#define D_INFO_CORE_VERSION "ESP-IDF Versie"
#define D_INFO_RESET_REASON "Reden Herstart"
#define D_INFO_STATUS "Status"
#define D_INFO_SERVER "Server"
#define D_INFO_USERNAME "Gerbuiker"
#define D_INFO_CLIENTID "Client ID"
// #define D_INFO_CONNECTED "Verbonden"
// #define D_INFO_DISCONNECTED "Verbroken"
#define D_INFO_RECEIVED "Ontvangen"
#define D_INFO_PUBLISHED "Gepubliceerd"
#define D_INFO_FAILED "Mislukt"
#define D_INFO_ETHERNET "Ethernet"
#define D_INFO_WIFI "Wifi"
#define D_INFO_LINK_SPEED "Snelheid"
#define D_INFO_FULL_DUPLEX "Full Duplex"
#define D_INFO_BSSID "BSSID"
#define D_INFO_SSID "SSID"
#define D_INFO_RSSI "Signaalsterkte"
#define D_INFO_IP_ADDRESS "IP Adres"
#define D_INFO_MAC_ADDRESS "Fysiek adres (MAC)"
#define D_INFO_GATEWAY "Gateway"
#define D_INFO_DNS_SERVER "DNS Server"

#define D_OOBE_MSG "Raak het scherm aan om WiFi in te stellen of meld je aan op AP:"
#define D_OOBE_SCAN_TO_CONNECT "Scan code"

#define D_WIFI_CONNECTING_TO "Verbinden met %s"
#define D_WIFI_CONNECTED_TO "Verbonden met %s, IP aanvragen..."
#define D_WIFI_RSSI_EXCELLENT "Uitstekend"
#define D_WIFI_RSSI_GOOD "Goed"
#define D_WIFI_RSSI_FAIR "Redelijk"
#define D_WIFI_RSSI_WEAK "Zwak"
#define D_WIFI_RSSI_BAD "Zeer Slecht"

#define D_GPIO_SWITCH "Schakelaar"
#define D_GPIO_BUTTON "Drukknop"
#define D_GPIO_TOUCH "Aanraakknop"
#define D_GPIO_LED "Led"
#define D_GPIO_LED_R "Sfeer Rood"
#define D_GPIO_LED_G "Sfeer Groen"
#define D_GPIO_LED_B "Sfeer Blauw"
#define D_GPIO_POWER_RELAY "Stroomrelais"
#define D_GPIO_LIGHT_RELAY "Licht Relais"
#define D_GPIO_PWM "PWM"
#define D_GPIO_DAC "DAC"
#define D_GPIO_SERIAL_DIMMER "Seriële Dimmer"
#define D_GPIO_UNKNOWN "Onbekend"
#define D_GPIO_PIN "Pin"
#define D_GPIO_GROUP "Groep"
#define D_GPIO_GROUP_NONE "Geen"
#define D_GPIO_STATE_NORMAL "Normaal"
#define D_GPIO_STATE_INVERTED "Geïnverteerd"

#endif
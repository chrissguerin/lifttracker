#include "BLEManager.h"

void BLEManager::SetupBluetooth() {
    BLE.setLocalName("XIAO_nRF52840_Sense");
    BLE.advertise();
}

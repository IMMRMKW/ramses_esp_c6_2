/********************************************************************
 * ramses_esp
 * cc_const.h
 *
 * (C) 2023 Peter Price
 *
 * TI CC11xx radio chip registers
 *
 */
#ifndef _CC_CONST_H_
#define _CC_CONST_H_

#define CC_READ 0x80
#define CC_BURST 0x40

// Read/Write single/burst
#define CC_IOCFG2 0x00
#define CC_IOCFG1 0x01
#define CC_IOCFG0 0x02
#define CC_FIFOTHR 0x03
#define CC_SYNC1 0x04
#define CC_SYNC0 0x05
#define CC_PKTLEN 0x06
#define CC_PKTCTRL1 0x07
#define CC_PKTCTRL0 0x08
#define CC_ADDR 0x09
#define CC_CHANNR 0x0A
#define CC_FSCTRL1 0x0B
#define CC_FSCTRL0 0x0C
#define CC_FREQ2 0x0D
#define CC_FREQ1 0x0E
#define CC_FREQ0 0x0F
#define CC_MDMCFG4 0x10
#define CC_MDMCFG3 0x11
#define CC_MDMCFG2 0x12
#define CC_MDMCFG1 0x13
#define CC_MDMCFG0 0x14
#define CC_DEVIATN 0x15
#define CC_MCSM2 0x16
#define CC_MCSM1 0x17
#define CC_MCSM0 0x18
#define CC_FOCCFG 0x19
#define CC_BSCFG 0x1A
#define CC_AGCCTRL2 0x1B
#define CC_AGCCTRL1 0x1C
#define CC_AGCCTRL0 0x1D
#define CC_WOREVT1 0x1E
#define CC_WOREVT0 0x1F
#define CC_WORCTRL 0x20
#define CC_FREND1 0x21
#define CC_FREND0 0x22
#define CC_FSCAL3 0x23
#define CC_FSCAL2 0x24
#define CC_FSCAL1 0x25
#define CC_FSCAL0 0x26
#define CC_RCCTRL1 0x27
#define CC_RCCTRL0 0x28
#define CC_FSTEST 0x29
#define CC_PTEST 0x2A
#define CC_AGCTEST 0x2B
#define CC_TEST2 0x2C
#define CC_TEST1 0x2D
#define CC_TEST0 0x2E
#define CC_PARAM_MAX 0x2F

// Strobe commands and registers
#define CC_SRES 0x30
#define CC_SFSTXON 0x31
#define CC_SXOFF 0x32
#define CC_SCAL 0x33
#define CC_SRX 0x34
#define CC_STX 0x35
#define CC_SIDLE 0x36
#define CC_SWORTIME 0x37
#define CC_SWOR 0x38
#define CC_SPWD 0x39
#define CC_SFRX 0x3A
#define CC_SFTX 0x3B
#define CC_SWORRST 0x3C
#define CC_SNOP 0x3D
#define CC_PATABLE 0x3E
#define CC_FIFO 0x3F

#define CC_PA_MAX 8

// Burst mode registers
#define CC_PARTNUM (CC_SRES | CC_BURST)
#define CC_VERSION (CC_SFSTXON | CC_BURST)
#define CC_FREQEST (CC_SXOFF | CC_BURST)
#define CC_LQI (CC_SCAL | CC_BURST)
#define CC_RSSI (CC_SRX | CC_BURST)
#define CC_MARCSTATE (CC_STX | CC_BURST)
#define CC_WORTIME1 (CC_SIDLE | CC_BURST)
#define CC_WORTIME0 (CC_SWORTIME | CC_BURST)
#define CC_PKTSTATUS (CC_SWOR | CC_BURST)
#define CC_VCO_VC_DAC (CC_SPWD | CC_BURST)
#define CC_TXBYTES (CC_SFRX | CC_BURST)
#define CC_RXBYTES (CC_SFTX | CC_BURST)
#define CC_RCCTRL1_STATUS (CC_SWORRST | CC_BURST)
#define CC_RCCTRL0_STATUS (CC_SNOP | CC_BURST)
#define CC_RXFIFO (CC_FIFO | CC_BURST)
#define CC_TXFIFO (CC_FIFO | CC_BURST)

// Chip Status byte
#define CC_CHIP_RDY 0x80
#define CC_STATE_MASK 0x70
#define CC_FIFO_MASK 0x0F

#define CC_STATE(status) (status & CC_STATE_MASK)
#define CC_STATE_IDLE 0x00
#define CC_STATE_RX 0x10
#define CC_STATE_TX 0x20
#define CC_STATE_FSTXON 0x30
#define CC_STATE_CALIBRATE 0x40
#define CC_STATE_SETTLING 0x50
#define CC_STATE_RX_OVERFLOW 0x60
#define CC_STATE_TX_UNDERFLOW 0x70

#endif // _CC_CONST_H_

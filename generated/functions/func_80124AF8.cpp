#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80124AF8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r28_addr_4 = 0;
    uint32_t r28_addr_5 = 0;
    uint32_t r28_addr_6 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint32_t r7_addr_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80124AF8;

loc_80124AF8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80124B10:
{
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r28 = r5;
    r29 = r6;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80124B28;
    }
}

loc_80124B20:
{
    r3 = 0;
    goto loc_80124CA8;
}

loc_80124B28:
{
    r0 = (r4 * 12);
    r8 = MemoryInline::FlatRead32((r3 + 16));
    r4 = (r7 + r0);
    r7_addr_1 = (r7 + r0);
    r0 = MemoryInline::FlatRead32(r7_addr_1);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & 16777215);
}

loc_80124B44:
{
    r30 = (r8 + r0);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80124B54;
    }
}

loc_80124B4C:
{
    r4 = 0;
    goto loc_80124C4C;
}

loc_80124B54:
{
    r0 = (r4 * 12);
    r4 = (r7 + r0);
    r7_addr_2 = (r7 + r0);
    r0 = MemoryInline::FlatRead32(r7_addr_2);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & 16777215);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80124B6C:
{
    r31 = (r8 + r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80124B7C;
    }
}

loc_80124B74:
{
    r4 = 0;
    goto loc_80124BF4;
}

loc_80124B7C:
{
    r4 = (r4 * 12);
    r7_addr_3 = (r7 + r4);
    r0 = MemoryInline::FlatRead32(r7_addr_3);
    r4 = (r7 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & 16777215);
    r27 = (r8 + r0);
    ctx->lr = 0x80124B98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80124AF8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80124B9C:
{
    r4 = r3;
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_80124BA8;
    }
}

loc_80124BA4:
{
    goto loc_80124BF4;
}

loc_80124BA8:
{
    r4 = (r3 + 1);
    r0 = 47;
    r6 = (r29 - r4);
    r28_addr_1 = (r28 + r3);
    MemoryInline::FlatWrite8(r28_addr_1, static_cast<uint8_t>(r0));
    r3 = (r28 + r4);
    r5 = r6;
    goto loc_80124BD8;
}

loc_80124BC4:
{
    r0 = MemoryInline::FlatRead8(r27);
    r5 = (r5 + -1);
    r27 = (r27 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
}

loc_80124BD8:
{
}

loc_80124BDC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80124BEC;
    }
}

loc_80124BE0:
{
    r0 = MemoryInline::FlatRead8(r27);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80124BC4;
    }
}

loc_80124BEC:
{
    r0 = (r6 - r5);
    r4 = (r4 + r0);
}

loc_80124BF4:
{
}

loc_80124BF8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r29))) {
        goto loc_80124C00;
    }
}

loc_80124BFC:
{
    goto loc_80124C4C;
}

loc_80124C00:
{
    r3 = (r4 + 1);
    r0 = 47;
    r6 = (r29 - r3);
    r28_addr_3 = (r28 + r4);
    MemoryInline::FlatWrite8(r28_addr_3, static_cast<uint8_t>(r0));
    r4 = (r28 + r3);
    r5 = r6;
    goto loc_80124C30;
}

loc_80124C1C:
{
    r0 = MemoryInline::FlatRead8(r31);
    r5 = (r5 + -1);
    r31 = (r31 + 1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
}

loc_80124C30:
{
}

loc_80124C34:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80124C44;
    }
}

loc_80124C38:
{
    r0 = MemoryInline::FlatRead8(r31);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80124C1C;
    }
}

loc_80124C44:
{
    r0 = (r6 - r5);
    r4 = (r3 + r0);
}

loc_80124C4C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r29));
}

loc_80124C50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80124C5C;
    }
}

loc_80124C54:
{
    r3 = r4;
    goto loc_80124CA8;
}

loc_80124C5C:
{
    r6 = (r4 + 1);
    r0 = 47;
    r5 = (r29 - r6);
    r28_addr_5 = (r28 + r4);
    MemoryInline::FlatWrite8(r28_addr_5, static_cast<uint8_t>(r0));
    r3 = (r28 + r6);
    r4 = r5;
    goto loc_80124C8C;
}

loc_80124C78:
{
    r0 = MemoryInline::FlatRead8(r30);
    r4 = (r4 + -1);
    r30 = (r30 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
}

loc_80124C8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80124C90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80124CA0;
    }
}

loc_80124C94:
{
    r0 = MemoryInline::FlatRead8(r30);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80124C78;
    }
}

loc_80124CA0:
{
    r0 = (r5 - r4);
    r3 = (r6 + r0);
}

loc_80124CA8:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80007FB gpr_write=0xF80009FB gpr_return=0x00000018 fpr_read=0x00003FFE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80124AF8 func_80124AF8 preserves=true fpr_mask=0x00000000

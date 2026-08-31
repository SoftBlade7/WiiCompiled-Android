#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F6F60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r27_addr_4 = 0;
    uint32_t r27_addr_5 = 0;
    uint32_t r27_addr_6 = 0;
    uint32_t r27_addr_7 = 0;
    uint32_t r27_addr_8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800F6F60;

loc_800F6F60:
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
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    goto loc_800F6FB4;
}

loc_800F6F88:
{
    r27_addr_2 = (r27 + r31);
    r4 = MemoryInline::FlatRead8(r27_addr_2);
    r3 = (r13 + -31576);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800133F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F6F9C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F6FA8;
    }
}

loc_800F6FA0:
{
    r0 = 1;
    goto loc_800F6FC4;
}

loc_800F6FA8:
{
    r3 = MemoryInline::FlatRead32(r29);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r29, r0);
}

loc_800F6FB4:
{
    r31 = MemoryInline::FlatRead32(r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r28));
}

loc_800F6FBC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F6F88;
    }
}

loc_800F6FC0:
{
    r0 = 0;
}

loc_800F6FC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F6FC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F6FD4;
    }
}

loc_800F6FCC:
{
    r3 = 0;
    goto loc_800F70B8;
}

loc_800F6FD4:
{
    r27_addr_4 = (r27 + r31);
    r4 = MemoryInline::FlatRead8(r27_addr_4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_800F6FE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(34))) {
        goto loc_800F6FF4;
    }
}

loc_800F6FE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(39));
}

loc_800F6FE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F6FF4;
    }
}

loc_800F6FEC:
{
    r3 = 0;
    goto loc_800F70B8;
}

loc_800F6FF4:
{
    r3 = MemoryInline::FlatRead32(r29);
    r0 = 0;
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32(r29, r3);
    r31 = (r27 + r3);
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r0 = MemoryInline::FlatRead32(r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r28));
}

loc_800F7014:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F7020;
    }
}

loc_800F7018:
{
    r3 = 0;
    goto loc_800F70B8;
}

loc_800F7020:
{
    r27_addr_5 = (r27 + r0);
    r0 = MemoryInline::FlatRead8(r27_addr_5);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_800F7030:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F7078;
    }
}

loc_800F7034:
{
    MemoryInline::FlatWrite32(r30, r31);
    r3 = 1;
    r4 = MemoryInline::FlatRead32(r29);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32(r29, r0);
    goto loc_800F70B8;
}

loc_800F7050:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r28));
}

loc_800F7054:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F7060;
    }
}

loc_800F7058:
{
    r3 = 0;
    goto loc_800F70B8;
}

loc_800F7060:
{
    r3 = MemoryInline::FlatRead32(r29);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r29, r0);
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 4), r0);
}

loc_800F7078:
{
    r3 = MemoryInline::FlatRead32(r29);
    r27_addr_7 = (r27 + r3);
    r0 = MemoryInline::FlatRead8(r27_addr_7);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_800F7088:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F7050;
    }
}

loc_800F708C:
{
    r0 = (r3 + 1);
    r3 = r31;
    MemoryInline::FlatWrite32(r29, r0);
    r4 = (r30 + 4);
    ctx->lr = 0x800F70A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F70D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F70A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F70B0;
    }
}

loc_800F70A8:
{
    r3 = 0;
    goto loc_800F70B8;
}

loc_800F70B0:
{
    MemoryInline::FlatWrite32(r30, r31);
    r3 = 1;
}

loc_800F70B8:
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800F6F60 func_800F6F60 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80077D70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80077D70;

loc_80077D70:
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
    r5 = MemoryInline::FlatRead16(r3);
    r27 = r3;
    r0 = MemoryInline::FlatRead16(r4);
    r28 = r4;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_80077D98:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80077DAC;
    }
}

loc_80077D9C:
{
    r3 = MemoryInline::FlatRead16((r3 + 2));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80077DA8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80077DB4;
    }
}

loc_80077DAC:
{
    r3 = 0;
    goto loc_80077EEC;
}

loc_80077DB4:
{
    r29 = 0;
    r31 = 0;
    r30 = 0;
    goto loc_80077E4C;
}

loc_80077DC4:
{
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r31_addr_2 = (r31 + r0);
    r3 = MemoryInline::FlatRead32(r31_addr_2);
    r5 = (r0 + r31);
    r0 = (r3 & 4);
}

loc_80077DD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80077E00;
    }
}

loc_80077DD8:
{
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r4 = (r0 + r31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
}

loc_80077DE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80077E10;
    }
}

loc_80077DE8:
{
    MemoryInline::FlatWrite32(r4, r3);
    r3 = (r4 + 4);
    r4 = (r5 + 4);
    r5 = 64;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80060E40u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    goto loc_80077E10;
}

loc_80077E00:
{
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r3_addr_2 = (r3 + r31);
    r0 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = (r0 & -5);
    r3_addr_3 = (r3 + r31);
    MemoryInline::FlatWrite32(r3_addr_3, r0);
}

loc_80077E10:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r31 = (r31 + 68);
    r0 = MemoryInline::FlatRead32((r27 + 8));
    r29 = (r29 + 1);
    r4 = (r3 + r30);
    r3 = (r0 + r30);
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r30 = (r30 + 4);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
}

loc_80077E4C:
{
    r0 = MemoryInline::FlatRead16(r28);
}

loc_80077E54:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r0))) {
        goto loc_80077DC4;
    }
}

loc_80077E58:
{
    r7 = 0;
    r6 = 0;
    goto loc_80077EDC;
}

loc_80077E64:
{
    r0 = MemoryInline::FlatRead32((r28 + 12));
    r7 = (r7 + 1);
    r3 = MemoryInline::FlatRead32((r27 + 12));
    r5 = (r0 + r6);
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 12u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r5 + 1));
    r4 = (r3 + r6);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 0u, r5);
    r6 = (r6 + 12);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 12u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r4, static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r5 + 3));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r5 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r4 + 2), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r4 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r5 + 5));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r5 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r4 + 4), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r4 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r5 + 7));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r5 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r4 + 6), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r4 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r5 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r4 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r5 + 9));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r4 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r5 + 10));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r4 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r5 + 11));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r4 + 11), static_cast<uint8_t>(r0));
}

loc_80077EDC:
{
    r0 = MemoryInline::FlatRead16((r28 + 2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
}

loc_80077EE4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80077E64;
    }
}

loc_80077EE8:
{
    r3 = 1;
}

loc_80077EEC:
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

// RECOMP_GUEST_ABI gpr_read=0xF80000FB gpr_write=0xF80008FB gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80077D70 func_80077D70 preserves=true fpr_mask=0x00000000

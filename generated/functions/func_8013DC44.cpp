#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013DC44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8013DC44;

loc_8013DC44:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
}

loc_8013DC5C:
{
    r26 = r3;
    r27 = r5;
    r28 = r6;
    r7 = 0;
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8013DCB4;
    }
}

loc_8013DC70:
{
    r0 = MemoryInline::FlatRead8((r5 + 8));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013DC78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013DCB4;
    }
}

loc_8013DC7C:
{
    r3 = MemoryInline::FlatRead16(r5);
    r0 = MemoryInline::FlatRead16((r5 + 2));
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r6 + 2), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r5 + 4));
    r0 = MemoryInline::FlatRead16((r5 + 6));
    MemoryInline::FlatWrite16((r6 + 4), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r6 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r5 + 8));
    MemoryInline::FlatWrite16((r6 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + 8));
    r3 = (r0 & -17);
    MemoryInline::FlatWrite8((r6 + 8), static_cast<uint8_t>(r3));
    goto loc_8013DD8C;
}

loc_8013DCB4:
{
    r31 = 0x80330000u;
    r30 = r4;
    r31 = (r31 + 25208);
    r29 = 0;
}

loc_8013DCC4:
{
    r0 = MemoryInline::FlatRead8((r31 + 1368));
    r0 = (r0 & 1);
}

loc_8013DCCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013DD08;
    }
}

loc_8013DCD0:
{
    r0 = MemoryInline::FlatRead8((r30 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013DCD8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013DCE4;
    }
}

loc_8013DCDC:
{
    r3 = 0;
    goto loc_8013DD8C;
}

loc_8013DCE4:
{
    r3 = r7;
    r4 = r30;
    r5 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8013DA28u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8013DCF8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013DD04;
    }
}

loc_8013DCFC:
{
    r3 = 0;
    goto loc_8013DD8C;
}

loc_8013DD04:
{
    r7 = r28;
}

loc_8013DD08:
{
    r29 = (r29 + 1);
    r30 = (r30 + 10);
}

loc_8013DD14:
{
    r31 = (r31 + 8);
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(2))) {
        goto loc_8013DCC4;
    }
}

loc_8013DD1C:
{
}

loc_8013DD20:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8013DD60;
    }
}

loc_8013DD24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_8013DD28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013DD58;
    }
}

loc_8013DD2C:
{
    r3 = MemoryInline::FlatRead16(r27);
    r0 = MemoryInline::FlatRead16((r27 + 2));
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r28 + 2), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r27 + 4));
    r0 = MemoryInline::FlatRead16((r27 + 6));
    MemoryInline::FlatWrite16((r28 + 4), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r28 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r27 + 8));
    MemoryInline::FlatWrite16((r28 + 8), static_cast<uint16_t>(r0));
    goto loc_8013DD88;
}

loc_8013DD58:
{
    r3 = 0;
    goto loc_8013DD8C;
}

loc_8013DD60:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(128));
}

loc_8013DD64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013DD88;
    }
}

loc_8013DD68:
{
    r3 = r27;
    r4 = r7;
    r5 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8013DA28u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8013DD7C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013DD88;
    }
}

loc_8013DD80:
{
    r3 = 0;
    goto loc_8013DD8C;
}

loc_8013DD88:
{
    r3 = MemoryInline::FlatRead8((r28 + 8));
}

loc_8013DD8C:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC0003FB gpr_write=0xFC000BFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8013DC44 func_8013DC44 preserves=true fpr_mask=0x00000000

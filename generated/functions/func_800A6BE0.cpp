#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A6BE0(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_800A6BE0;

loc_800A6BE0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r5 = MemoryInline::FlatRead32((r3 + 2080));
    r0 = 0;
    r31 = r3;
    r4 = (r1 + 16);
    r27 = MemoryInline::FlatRead32((r5 + 8));
    r5 = (r1 + 12);
    r6 = (r1 + 8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r0);
    ctx->lr = 0x800A6C20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A7E00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800A6C24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A6C30;
    }
}

loc_800A6C28:
{
    r3 = 0;
    goto loc_800A6DC0;
}

loc_800A6C30:
{
    r4 = MemoryInline::FlatRead32((r31 + 240));
    r3 = MemoryInline::FlatRead32((r31 + 260));
    r0 = MemoryInline::FlatRead32((r31 + 256));
    r4 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
    r3 = MemoryInline::FlatRead32((r31 + 252));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(8192));
}

loc_800A6C48:
{
    MemoryInline::FlatWrite32((r31 + 312), r0);
    r3 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 352), r3);
    MemoryInline::FlatWrite32((r31 + 348), r4);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800A6C64;
    }
}

loc_800A6C5C:
{
    r3 = 0;
    goto loc_800A6DC0;
}

loc_800A6C64:
{
    r0 = PPC_Divwu(static_cast<uint32_t>(r27), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32((r31 + 316), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_800A6C70:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800A6C7C;
    }
}

loc_800A6C74:
{
    r3 = 0;
    goto loc_800A6DC0;
}

loc_800A6C7C:
{
}

loc_800A6C80:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(32))) {
        goto loc_800A6C8C;
    }
}

loc_800A6C84:
{
    r0 = 32;
    MemoryInline::FlatWrite32((r31 + 316), r0);
}

loc_800A6C8C:
{
    r4 = MemoryInline::FlatRead32((r31 + 316));
    r3 = 0;
    r0 = MemoryInline::FlatRead8((r31 + 294));
    r5 = (r4 + -1);
    MemoryInline::FlatWrite32((r31 + 320), r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A6CA4:
{
    MemoryInline::FlatWrite32((r31 + 308), r5);
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWrite32((r31 + 344), r0);
    r4 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWrite32((r31 + 332), r4);
    MemoryInline::FlatWrite32((r31 + 328), r3);
    MemoryInline::FlatWrite32((r31 + 340), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A6CD0;
    }
}

loc_800A6CC4:
{
    r0 = MemoryInline::FlatRead32((r31 + 252));
    MemoryInline::FlatWrite32((r31 + 324), r0);
    goto loc_800A6D08;
}

loc_800A6CD0:
{
    r6 = MemoryInline::FlatRead32((r31 + 352));
    r7 = (r5 + 1);
    r0 = MemoryInline::FlatRead32((r31 + 348));
    r3 = (r6 - r4);
    r4 = (r3 + 1);
    r3 = (r6 - r0);
    r4 = (r7 - r4);
    r3 = (r3 + 1);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A6D04;
    }
}

loc_800A6D00:
{
    r5 = r7;
}

loc_800A6D04:
{
    MemoryInline::FlatWrite32((r31 + 324), r5);
}

loc_800A6D08:
{
    r0 = MemoryInline::FlatRead32((r31 + 324));
    MemoryInline::FlatWrite32((r31 + 336), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r31 + 299));
    r30 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A6D20:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A6DB4;
    }
}

loc_800A6D24:
{
    r28 = r31;
    r27 = 0;
    goto loc_800A6D84;
}

loc_800A6D30:
{
    r3 = MemoryInline::FlatRead32((r31 + 2080));
    ctx->lr = 0x800A6D38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A4D20u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800A6D3C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800A6D78;
    }
}

loc_800A6D40:
{
    r26 = r31;
    r28 = 0;
    r29 = 0;
    goto loc_800A6D68;
}

loc_800A6D50:
{
    r3 = MemoryInline::FlatRead32((r31 + 2080));
    r4 = MemoryInline::FlatRead32((r26 + 2100));
    ctx->lr = 0x800A6D5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A4E10u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWrite32((r26 + 2100), r29);
    r26 = (r26 + 52);
    r28 = (r28 + 1);
}

loc_800A6D68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r27));
}

loc_800A6D6C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800A6D50;
    }
}

loc_800A6D70:
{
    r0 = 0;
    goto loc_800A6D94;
}

loc_800A6D78:
{
    MemoryInline::FlatWrite32((r28 + 2100), r3);
    r28 = (r28 + 52);
    r27 = (r27 + 1);
}

loc_800A6D84:
{
    r0 = MemoryInline::FlatRead32((r31 + 2092));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r0));
}

loc_800A6D8C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800A6D30;
    }
}

loc_800A6D90:
{
    r0 = 1;
}

loc_800A6D94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A6D98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A6DAC;
    }
}

loc_800A6D9C:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0;
    goto loc_800A6DC0;
}

loc_800A6DAC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 299), static_cast<uint8_t>(r0));
}

loc_800A6DB4:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 1;
}

loc_800A6DC0:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

// RECOMP_GUEST_ABI gpr_read=0xFC0007FB gpr_write=0xFC000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800A6BE0 func_800A6BE0 preserves=true fpr_mask=0x00000000

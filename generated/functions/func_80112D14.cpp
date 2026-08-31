#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80112D14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80112D14;

loc_80112D14:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r4;
    ctx->lr = 0x80112D30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80112A0Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80112D34:
{
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80112D44;
    }
}

loc_80112D3C:
{
    r3 = 0;
    goto loc_80112E28;
}

loc_80112D44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(4));
}

loc_80112D48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80112D50;
    }
}

loc_80112D4C:
{
    r30 = 3;
}

loc_80112D50:
{
    r0 = MemoryInline::FlatRead32((r3 + 404));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(r30));
}

loc_80112D58:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80112D64;
    }
}

loc_80112D5C:
{
    r3 = 1;
    goto loc_80112E28;
}

loc_80112D64:
{
    r0 = MemoryInline::FlatRead32((r3 + 400));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80112D6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80112D7C;
    }
}

loc_80112D70:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80112D7C;
    }
}

loc_80112D74:
{
    r3 = 0;
    goto loc_80112E28;
}

loc_80112D7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80112D80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80112DA8;
    }
}

loc_80112D84:
{
    r4 = 0x80280000u;
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r4 = (r4 + -10488);
    r5 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800133B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80112D9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80112DA8;
    }
}

loc_80112DA0:
{
    r3 = 0;
    goto loc_80112E28;
}

loc_80112DA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80112DAC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 400), 0, 52u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r31 + 404), r30);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80112DC4;
    }
}

loc_80112DB4:
{
    r0 = 0;
    r3 = 1;
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r31 + 400), r0);
    goto loc_80112E28;
}

loc_80112DC4:
{
    r7 = 0;
    r4 = 0x80110000u;
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r31 + 400), r7);
    r4 = (r4 + 11840);
    r6 = 0x80110000u;
    r3 = 0x80110000u;
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r31 + 432), r4);
    r6 = (r6 + 12176);
    r5 = 0x80110000u;
    r4 = 0x80110000u;
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r31 + 440), r6);
    r3 = (r3 + 12064);
    r5 = (r5 + 12572);
    r4 = (r4 + 12580);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r31 + 436), r3);
    r0 = 1;
    r3 = 1;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r31 + 444), r5);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r31 + 448), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r31 + 408), r7);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r31 + 412), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r31 + 416), r7);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r31 + 420), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r31 + 424), r7);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r31 + 428), r7);
    }
}

loc_80112E28:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00020FB gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80112D14 func_80112D14 preserves=true fpr_mask=0x00000000

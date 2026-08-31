#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A4DC8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801A4DC8;

loc_801A4DC8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    r6 = 480;
    r5 = 40;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    r0 = 640;
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r1 + 12), r3);
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r1 + 14), r6);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_0, 16u, (r1 + 16), r4);
        MemoryInline::WriteResolved16(guest_range_0, 18u, (r1 + 18), r5);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 22u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 22u, (r1 + 22), r0);
        MemoryInline::WriteResolved16(guest_range_0, 24u, (r1 + 24), r4);
    }
    ctx->lr = 0x801A4DFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801BACD8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_801A4E00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A4E24;
    }
}

loc_801A4E04:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A4E18;
    }
}

loc_801A4E08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801A4E0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A4E24;
    }
}

loc_801A4E10:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A4E80;
    }
}

loc_801A4E14:
{
    goto loc_801A4E98;
}

loc_801A4E18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_801A4E1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A4E64;
    }
}

loc_801A4E20:
{
    goto loc_801A4E98;
}

loc_801A4E24:
{
    r3 = -872415232;
    r0 = MemoryInline::FlatRead16((r3 + 8300));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A4E30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A4E4C;
    }
}

loc_801A4E34:
{
    r0 = 0;
    r3 = 2;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    goto loc_801A4E98;
}

loc_801A4E4C:
{
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    goto loc_801A4E98;
}

loc_801A4E64:
{
    r4 = 20;
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    goto loc_801A4E98;
}

loc_801A4E80:
{
    r4 = 4;
    r3 = 47;
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
}

loc_801A4E98:
{
    r3 = (r1 + 8);
    ctx->lr = 0x801A4EA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B9F6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    r4 = 0;
    r5 = 640;
    r6 = 480;
    ctx->lr = 0x801A4EB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x801BA650u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801A4DC8 func_801A4DC8 preserves=true fpr_mask=0x00000000

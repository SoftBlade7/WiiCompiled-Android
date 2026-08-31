#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8010E6D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8010E6D8;

loc_8010E6D8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r29 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_8010E700:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8010E71C;
    }
}

loc_8010E704:
{
    r3 = r29;
    ctx->lr = 0x8010E70Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8010A624u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8010E710:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010E71C;
    }
}

loc_8010E714:
{
    r3 = 0;
    goto loc_8010E7D8;
}

loc_8010E71C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 8), 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r29 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_8010E724:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010E7D4;
    }
}

loc_8010E728:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r29 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8010E730:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010E7D4;
    }
}

loc_8010E734:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r29 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8010E73C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010E7D4;
    }
}

loc_8010E740:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r29);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r29 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8010E74C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010E7D4;
    }
}

loc_8010E750:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r29 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8010E758:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010E7D4;
    }
}

loc_8010E75C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r29 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_8010E764:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010E7C4;
    }
}

loc_8010E768:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // inline leaf 0x800EF4A8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800EF4A8
    r31 = r3;
    r30 = 0;
    goto loc_8010E7B8;
}

loc_8010E780:
{
    r29 = MemoryInline::FlatRead32((r1 + 8));
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // inline leaf 0x800EF4B0 (12 guest instruction(s))
}

loc_inl1_0x800EF4B0:
{
}

loc_inl1_0x800EF4B4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_inl1_0x800EF4C4;
    }
}

loc_inl1_0x800EF4B8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl1_0x800EF4C0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_inl1_0x800EF4CC;
    }
}

loc_inl1_0x800EF4C4:
{
    r3 = 0;
    goto loc_inl1_cont_800EF4B0;
}

loc_inl1_0x800EF4CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl1_cont_800EF4B0:
{
    // end of inlined leaf 0x800EF4B0
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r0));
}

loc_8010E79C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010E7B4;
    }
}

loc_8010E7A0:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 16));
    ctx->lr = 0x8010E7B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800EF830u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8010E7D4;
}

loc_8010E7B4:
{
    r30 = (r30 + 1);
}

loc_8010E7B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r31));
}

loc_8010E7BC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8010E780;
    }
}

loc_8010E7C0:
{
    goto loc_8010E7D4;
}

loc_8010E7C4:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 8));
    r4 = (r1 + 8);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    ctx->lr = 0x8010E7D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F0038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8010E7D4:
{
    r3 = 1;
}

loc_8010E7D8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8010E6D8 func_8010E6D8 preserves=true fpr_mask=0x00000000

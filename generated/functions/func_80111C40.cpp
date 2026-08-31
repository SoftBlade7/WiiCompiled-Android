#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80111C40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80111C40;

loc_80111C40:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80111C4C:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80111C70;
    }
}

loc_80111C68:
{
    r3 = 0;
    goto loc_80111D5C;
}

loc_80111C70:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80111C78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80111C84;
    }
}

loc_80111C7C:
{
    r3 = 0;
    goto loc_80111D5C;
}

loc_80111C84:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 12));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 8));
        }
    }
    r0 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r5));
}

loc_80111C94:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80111D34;
    }
}

loc_80111C98:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80111CA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80111CC4;
    }
}

loc_80111CA4:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r5 = 1;
    r0 = 2;
    MemoryInline::FlatWrite32((r4 + 288), r5);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r3 = 0;
    MemoryInline::FlatWrite32((r4 + 60), r0);
    goto loc_80111D5C;
}

loc_80111CC4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 20));
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80111CD4;
    }
}

loc_80111CCC:
{
    r0 = 0;
    goto loc_80111D10;
}

loc_80111CD4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80111CD8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80111CE4;
    }
}

loc_80111CDC:
{
    r0 = 0;
    goto loc_80111D10;
}

loc_80111CE4:
{
    r30 = (r5 + r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 4));
    r4 = r30;
    ctx->lr = 0x80111CF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80111CF8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80111D04;
    }
}

loc_80111CFC:
{
    r0 = 0;
    goto loc_80111D10;
}

loc_80111D04:
{
    MemoryInline::FlatWrite32((r31 + 4), r3);
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 8), r30);
}

loc_80111D10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80111D14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80111D34;
    }
}

loc_80111D18:
{
    r4 = MemoryInline::FlatRead32(r31);
    r0 = 1;
    r3 = 0;
    MemoryInline::FlatWrite32((r4 + 288), r0);
    r4 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite32((r4 + 60), r0);
    goto loc_80111D5C;
}

loc_80111D34:
{
    r5 = MemoryInline::FlatRead32((r31 + 4));
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r31 + 12));
    r3 = 1;
    r5_addr_1 = (r5 + r4);
    MemoryInline::FlatWrite8(r5_addr_1, static_cast<uint8_t>(r29));
    r5 = MemoryInline::FlatRead32((r31 + 12));
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r5 = (r5 + 1);
    MemoryInline::FlatWrite32((r31 + 12), r5);
    r4_addr_1 = (r4 + r5);
    MemoryInline::FlatWrite8(r4_addr_1, static_cast<uint8_t>(r0));
}

loc_80111D5C:
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
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xE000103B gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x03 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x80111C40 func_80111C40 preserves=true fpr_mask=0x00000000

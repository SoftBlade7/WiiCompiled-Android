#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DC5C0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801DC5C0;

loc_801DC5C0:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    MemoryInline::FlatWriteRam32((r1 + 172), r31);
    r0 = MemoryInline::FlatRead32((r13 + -24384));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DC5D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DC5E4;
    }
}

loc_801DC5DC:
{
    r3 = -9;
    goto loc_801DC72C;
}

loc_801DC5E4:
{
    r0 = MemoryInline::FlatRead32((r13 + -24388));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DC5EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DC5F8;
    }
}

loc_801DC5F0:
{
    r3 = 0;
    goto loc_801DC72C;
}

loc_801DC5F8:
{
    r8 = MemoryInline::FlatRead32((r13 + -24392));
    r0 = 31;
    r7 = 0;
    r6 = r8;
    ctr = r0;
}

loc_801DC60C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r6, 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r6);
            r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r6 + 4));
        }
    }
    r7 = (r7 + r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r6 + 8));
    r7 = (r7 + r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r6 + 12));
    r7 = (r7 + r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r6 + 16));
    r7 = (r7 + r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r6 + 20));
    r7 = (r7 + r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r6 + 24));
    r7 = (r7 + r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r6 + 28));
    r7 = (r7 + r3);
    r6 = (r6 + 32);
    r7 = (r7 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801DC60C;
    }
}

loc_801DC654:
{
    r0 = MemoryInline::FlatRead32(r6);
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r5 = 1;
    r7 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r6 + 8));
    r7 = (r7 + r4);
    r4 = MemoryInline::FlatRead32((r6 + 12));
    r7 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r6 + 16));
    r7 = (r7 + r4);
    r4 = MemoryInline::FlatRead32((r6 + 20));
    r7 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r6 + 24));
    r7 = (r7 + r4);
    r7 = (r7 + r0);
    MemoryInline::FlatWrite32((r8 + 1020), r7);
    r4 = MemoryInline::FlatRead32((r13 + -28260));
    ctx->lr = 0x801DC6A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801DAC68u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DC6A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DC6D8;
    }
}

loc_801DC6A8:
{
    r3 = MemoryInline::FlatRead32((r13 + -24392));
    r5 = (r1 + 8);
    r4 = 1024;
    ctx->lr = 0x801DC6B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801DB514u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r31 = r3;
    r3 = (r1 + 8);
    ctx->lr = 0x801DC6C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801DAFBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801DC6C8:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_801DC6D0;
    }
}

loc_801DC6CC:
{
    r3 = r31;
}

loc_801DC6D0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -24388), r0);
}

loc_801DC6D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DC6DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DC6E4;
    }
}

loc_801DC6E0:
{
    goto loc_801DC72C;
}

loc_801DC6E4:
{
    r4 = MemoryInline::FlatRead32((r13 + -28256));
    r3 = (r1 + 8);
    r5 = 1;
    ctx->lr = 0x801DC6F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801DAC68u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DC6F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DC72C;
    }
}

loc_801DC6FC:
{
    r3 = MemoryInline::FlatRead32((r13 + -24392));
    r5 = (r1 + 8);
    r4 = 1024;
    ctx->lr = 0x801DC70Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801DB514u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r31 = r3;
    r3 = (r1 + 8);
    ctx->lr = 0x801DC718u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801DAFBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801DC71C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DC724;
    }
}

loc_801DC720:
{
    r3 = r31;
}

loc_801DC724:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -24388), r0);
}

loc_801DC72C:
{
    r0 = MemoryInline::FlatRead32((r1 + 180));
    r31 = MemoryInline::FlatRead32((r1 + 172));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801DC5C0 func_801DC5C0 preserves=true fpr_mask=0x00000000

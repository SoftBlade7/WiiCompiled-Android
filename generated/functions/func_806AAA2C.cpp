#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806AAA2C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806AAA2C;

loc_806AAA2C:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    r4 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    r5 = (r1 + 20);
    f0.d = MemoryInline::FlatReadFloat32((r4 + -10592));
    r4 = (r1 + 32);
    MemoryInline::FlatWriteRam32((r1 + 108), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 104), r30);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 116));
    r3 = (r3 + 1780);
    f1.d = (-(f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    ctx->lr = 0x806AAA70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x806B4108u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 572), 0, 1256u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 1208u, (r31 + 1780));
    r3 = (r1 + 8);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1212u, (r31 + 1784));
    r4 = (r31 + 1744);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r5 = (r1 + 20);
    MemoryInline::FlatWriteRam32((r1 + 48), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 1216u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 1216u, (r31 + 1788));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 1220u, (r31 + 1792));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    MemoryInline::FlatWriteRam32((r1 + 56), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 1224u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 1224u, (r31 + 1796));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 1228u, (r31 + 1800));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 64), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 1232u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 1232u, (r31 + 1804));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 1236u, (r31 + 1808));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    MemoryInline::FlatWriteRam32((r1 + 72), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 1240u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 1240u, (r31 + 1812));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 1244u, (r31 + 1816));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRam32((r1 + 80), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 1248u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 1248u, (r31 + 1820));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 1252u, (r31 + 1824));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    MemoryInline::FlatWriteRam32((r1 + 88), r6);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
    r30 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 572));
}

loc_806AAB00:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_806AAB0C;
    }
}

loc_806AAB04:
{
    r0 = 0;
    goto loc_806AAB80;
}

loc_806AAB0C:
{
    r3 = (r30 + 116);
    // inline leaf 0x800375F0 (16 guest instruction(s))
}

loc_inl1_0x800375F0:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_0x800375F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x80037604;
    }
}

loc_inl1_0x800375FC:
{
    r0 = 0;
    goto loc_inl1_0x80037618;
}

loc_inl1_0x80037604:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
}

loc_inl1_0x80037618:
{
}

loc_inl1_0x8003761C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x80037628;
    }
}

loc_inl1_0x80037620:
{
    r3 = r4;
    goto loc_inl1_cont_800375F0;
}

loc_inl1_0x80037628:
{
    r3 = 0;
}

loc_inl1_cont_800375F0:
{
    // end of inlined leaf 0x800375F0
}

loc_806AAB18:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806AAB24;
    }
}

loc_806AAB1C:
{
    r3 = 0;
    goto loc_806AAB28;
}

loc_806AAB24:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_806AAB28:
{
}

loc_806AAB2C:
{
    r0 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_806AAB3C;
    }
}

loc_806AAB34:
{
}

loc_806AAB38:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_806AAB40;
    }
}

loc_806AAB3C:
{
    r0 = 1;
}

loc_806AAB40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806AAB44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806AAB50;
    }
}

loc_806AAB48:
{
    r0 = 0;
    goto loc_806AAB80;
}

loc_806AAB50:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = (r1 + 48);
    r12 = MemoryInline::FlatRead32((r12 + 120));
    ctr = r12;
    ctx->lr = 0x806AAB68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 128));
    ctr = r12;
    ctx->lr = 0x806AAB7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 1;
}

loc_806AAB80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806AAB84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806AAB90;
    }
}

loc_806AAB88:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 9), static_cast<uint8_t>(r0));
}

loc_806AAB90:
{
    r0 = MemoryInline::FlatRead32((r1 + 116));
    r31 = MemoryInline::FlatRead32((r1 + 108));
    r30 = MemoryInline::FlatRead32((r1 + 104));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806AAA2C func_806AAA2C preserves=true fpr_mask=0x00000000

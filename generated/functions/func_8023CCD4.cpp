#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023CCD4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8023CCD4;

loc_8023CCD4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r4 = (r31 + 24);
    r5 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r5 + 244));
    r5 = (r31 + 72);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80229460u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    // inline leaf 0x802402E0 (30 guest instruction(s))
    r8 = 0x80380000u;
    r0 = MemoryInline::FlatRead32((r13 + -27728));
    r8 = (r8 + 17536);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24296));
    r4 = (r8 + 48);
    r7 = (r0 & -4);
    r3 = (r8 + 72);
    r6 = -1;
    r0 = 0;
    r5 = (r8 + 0);
    MemoryInline::FlatWrite32((r13 + -27728), r7);
    MemoryInline::FlatWrite32((r13 + -27724), r6);
    MemoryInline::FlatWrite32((r13 + -23744), r0);
    guest_range_2 = MemoryInline::ResolveRangeHost((r5 + 8), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r5 + 8), r0);
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r5 + 20), r0);
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r5 + 32), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r5 + 44), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r8 + 48), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 64u, (r8 + 72), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r4 + 4), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 68u, (r3 + 4), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 48u, (r4 + 8), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 72u, (r3 + 8), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 52u, (r4 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 76u, (r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 56u, (r4 + 16), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 80u, (r3 + 16), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 60u, (r4 + 20), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 84u, (r3 + 20), f0.d);
    // end of inlined leaf 0x802402E0
    r4 = 0x80380000u;
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r31 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r31 + 28));
        }
    }
    r4 = (r4 + 16704);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r4 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_1, 0u, r4, r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r31 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r31 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r4 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r4 + 8), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r31 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r31 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r4 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r4 + 16), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 48u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r31 + 48));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r31 + 52));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r4 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r4 + 24), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r31 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r31 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r4 + 36), r0);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r4 + 32), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 64u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r31 + 64));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 68u, (r31 + 68));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r4 + 44), r0);
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r4 + 40), r3);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r31 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8023CD70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023CD84;
    }
}

loc_8023CD74:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, r31);
    r4 = (r31 + 24);
    r5 = MemoryInline::FlatRead8((r6 + 244));
    ctx->lr = 0x8023CD84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022A6B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8023CD84:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8023CD8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023CDA4;
    }
}

loc_8023CD90:
{
    r4 = (r31 + 72);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80227274u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r4 = MemoryInline::FlatRead32(r31);
    ctx->lr = 0x8023CDA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x802272B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_8023CDA4:
{
    ctx->lr = 0x8023CDA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x802415E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    r0 = MemoryInline::FlatRead32((r31 + 4));
}

loc_8023CDB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8023CDE8;
    }
}

loc_8023CDB4:
{
    r0 = MemoryInline::FlatRead16((r31 + 16));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023CDBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023CDE8;
    }
}

loc_8023CDC0:
{
    r3 = (r31 + 72);
    ctx->lr = 0x8023CDC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023DBD8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r5 = r3;
    f1.d = MemoryInline::FlatReadFloat32(r3);
    r3 = MemoryInline::FlatRead32((r4 + 32));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 12));
    ctx->lr = 0x8023CDE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022ED20u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8023CDE8:
{
    r0 = MemoryInline::FlatRead16((r31 + 16));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023CDF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023CE0C;
    }
}

loc_8023CDF4:
{
    r0 = MemoryInline::FlatRead16((r31 + 18));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023CDFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8023CE0C;
    }
}

loc_8023CE00:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r4 = (r31 + 72);
    ctx->lr = 0x8023CE0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80240048u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8023CE0C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8023CCD4 func_8023CCD4 preserves=true fpr_mask=0x00000000

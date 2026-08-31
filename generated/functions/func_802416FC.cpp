#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802416FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802416FC;

loc_802416FC:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80241708:
{
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8024171C;
    }
}

loc_80241710:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_80241714:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80241778;
    }
}

loc_80241718:
{
    goto loc_802417EC;
}

loc_8024171C:
{
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 36), 0, 28u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 36), r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 40), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 44), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 48), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 52), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 56), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 60), r0);
    f0.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r1 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r1 + 44), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r1 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r1 + 52), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r1 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 44));
    r3 = (r1 + 36);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r1 + 60), f0.d);
    ctx->lr = 0x80241774u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x802417FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    goto loc_802417EC;
}

loc_80241778:
{
    r10 = 0x80260000u;
    r10 = (r10 + -32240);
    r9 = MemoryInline::FlatRead32(r10);
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 28u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 8), r9);
    r8 = MemoryInline::FlatRead32((r10 + 4));
    r7 = MemoryInline::FlatRead32((r10 + 8));
    r6 = MemoryInline::FlatRead32((r10 + 12));
    r5 = MemoryInline::FlatRead32((r10 + 16));
    r4 = MemoryInline::FlatRead32((r10 + 20));
    r0 = MemoryInline::FlatRead32((r10 + 24));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r1 + 12), r8);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 16), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 20), r6);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 24), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 28), r4);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 32), r0);
    }
    f0.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r1 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r1 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r1 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r1 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 44));
    r3 = (r1 + 8);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r1 + 32), f0.d);
    ctx->lr = 0x802417ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x802417FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
}

loc_802417EC:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800027FF gpr_write=0x800007FB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802416FC func_802416FC preserves=true fpr_mask=0x00000000

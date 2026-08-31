#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A75CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_stfsx_805A7664_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805A75CC;

loc_805A75CC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    r4 = 0x80890000u;
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r0);
    r5 = (r1 + 20);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 9088));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r1 + 92), r31);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r1 + 88), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r29);
    r29 = r3;
    r4 = (r29 + 136);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 156));
    r6 = (r29 + 160);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 152));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 148));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    r3 = (r3 + 12);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r1 + 28), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r1 + 20), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r1 + 24), f1.d);
    }
    ctx->lr = 0x805A7628u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FC34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = (r29 + 60);
    r4 = (r29 + 12);
    r5 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80230410u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r31 = 0;
    r30 = 0;
    goto loc_805A7680;
}

loc_805A7644:
{
    r0 = MemoryInline::FlatRead32((r29 + 172));
    r3 = (r1 + 8);
    r4 = (r1 + 32);
    r5 = (r0 + r30);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x802303F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r31 = (r31 + 1);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    addr_stfsx_805A7664_loc_0 = (r30 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_805A7664_loc_0, f0.d);
    r3 = (r0 + r30);
    r30 = (r30 + 12);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
}

loc_805A7680:
{
    r3 = MemoryInline::FlatRead16((r29 + 128));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r3));
}

loc_805A7688:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805A7644;
    }
}

loc_805A768C:
{
    r0 = (r3 + -1);
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r0 * 12);
    r3 = MemoryInline::FlatRead32((r29 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 160));
    r3 = (r3 + r0);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 164));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 168));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    r29 = MemoryInline::FlatRead32((r1 + 84));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000000E gpr_write=0xF000007B gpr_return=0x00000018 fpr_read=0xFF00D050 fpr_write=0xFF00FFFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A75CC func_805A75CC preserves=true fpr_mask=0x00000000

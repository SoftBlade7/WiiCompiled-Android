#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808366D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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

    goto loc_808366D0;

loc_808366D0:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    r6 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat32(r5);
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    f1.d = MemoryInline::FlatReadFloat32((r6 + -13548));
    MemoryInline::FlatWriteRam32((r1 + 92), r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_808366F0:
{
    MemoryInline::FlatWriteRam32((r1 + 88), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 84), r29);
    r29 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8083676C;
    }
}

loc_80836704:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    r3 = (r1 + 24);
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    // inline leaf 0x80230280 (17 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    f3.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 32), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 36), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 40), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 44), f2.d);
    // end of inlined leaf 0x80230280
    r4 = (r1 + 24);
    r3 = r30;
    r5 = r4;
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
    goto loc_80836758;
}

loc_80836734:
{
    r0 = (r31 & 255);
    r4 = MemoryInline::FlatRead32((r29 + 36));
    r5 = (r0 * 12);
    r0 = MemoryInline::FlatRead32((r29 + 40));
    r3 = (r1 + 24);
    r4 = (r4 + r5);
    r5 = (r0 + r5);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x8019A91Cu>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r31 = (r31 + 1);
}

loc_80836758:
{
    r0 = MemoryInline::FlatRead8((r29 + 33));
    r3 = (r31 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80836764:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80836734;
    }
}

loc_80836768:
{
    goto loc_808367A8;
}

loc_8083676C:
{
    r31 = 0;
    goto loc_80836798;
}

loc_80836774:
{
    r0 = (r31 & 255);
    r4 = MemoryInline::FlatRead32((r29 + 36));
    r5 = (r0 * 12);
    r0 = MemoryInline::FlatRead32((r29 + 40));
    r3 = r30;
    r4 = (r4 + r5);
    r5 = (r0 + r5);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x8019A91Cu>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r31 = (r31 + 1);
}

loc_80836798:
{
    r0 = MemoryInline::FlatRead8((r29 + 33));
    r3 = (r31 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_808367A4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80836774;
    }
}

loc_808367A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 100));
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    r29 = MemoryInline::FlatRead32((r1 + 84));
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

// RECOMP_GUEST_ABI gpr_read=0xE000003F gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x8000D04F fpr_write=0x8000FFFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808366D0 func_808366D0 preserves=true fpr_mask=0x00000000

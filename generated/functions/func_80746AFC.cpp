#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80746AFC(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80746AFC;

loc_80746AFC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 0x802A0000u;
    r7 = 0x802A0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r8 = (r6 + 16640);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80746B18:
{
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 11192);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    f1.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    f4.d = MemoryInline::FlatReadFloat32((r6 + 16640));
    r6 = (r7 + 16664);
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 44u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r4 + 12), f4.d);
    f3.d = MemoryInline::FlatReadFloat32((r8 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r4 + 16), f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r8 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r4 + 20), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r4, f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r4 + 4), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r4 + 8), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r7 + 16664));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r4 + 24), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r6 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r4 + 28), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r6 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r4 + 32), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r4 + 36), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r4 + 40), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80746BA8;
    }
}

loc_80746B90:
{
    r3 = 0x808D0000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + -18660));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    goto loc_80746BBC;
}

loc_80746BA8:
{
    r3 = 0x808D0000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + -18668));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_80746BBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80746BC0:
{
    MemoryInline::FlatWriteFloat32((r28 + 96), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80746BE0;
    }
}

loc_80746BC8:
{
    r3 = 0x808D0000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + -18660));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085180u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    goto loc_80746BF4;
}

loc_80746BE0:
{
    r3 = 0x808D0000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + -18668));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085180u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
}

loc_80746BF4:
{
    MemoryInline::FlatWriteFloat32((r28 + 100), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 96));
    MemoryInline::FlatWriteFloat32((r29 + 44), f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 100));
    MemoryInline::FlatWriteFloat32((r29 + 48), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 96));
    f1.d = (-(f1.d));
    MemoryInline::FlatWriteFloat32((r29 + 52), f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 100));
    MemoryInline::FlatWriteFloat32((r29 + 56), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 112), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 56));
    MemoryInline::FlatWriteFloat32((r28 + 116), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 44));
    MemoryInline::FlatWriteFloat32((r28 + 120), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 48));
    MemoryInline::FlatWriteFloat32((r28 + 124), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 60), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
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

// RECOMP_GUEST_ABI gpr_read=0xF00001FF gpr_write=0xF00001DB gpr_return=0x00000018 fpr_read=0x00000002 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80746AFC func_80746AFC preserves=true fpr_mask=0x00000000

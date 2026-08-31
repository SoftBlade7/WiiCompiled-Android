#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805F0618(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;

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

    goto loc_805F0618;

loc_805F0618:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    r4 = 1431633920;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r0 = (r4 + 21846);
    MemoryInline::FlatWriteRam32((r1 + 92), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 88), r30);
    r30 = 0x80890000u;
    r30 = (r30 + 23712);
    MemoryInline::FlatWriteRam32((r1 + 84), r29);
    r6 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead8((r6 + 186));
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r0 = (r4 + r0);
    r0 = (r0 * 3);
    r0 = (r5 - r0);
    r0 = (r0 & 255);
}

loc_805F0664:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F067C;
    }
}

loc_805F0668:
{
}

loc_805F066C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_805F06A0;
    }
}

loc_805F0670:
{
}

loc_805F0674:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_805F06C4;
    }
}

loc_805F0678:
{
    goto loc_805F06E8;
}

loc_805F067C:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 176));
    f1.d = MemoryInline::FlatReadFloat32((r6 + 76));
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 76));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    goto loc_805F06E8;
}

loc_805F06A0:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 180));
    f0.d = MemoryInline::FlatReadFloat32((r6 + 76));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    goto loc_805F06E8;
}

loc_805F06C4:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 180));
    f1.d = MemoryInline::FlatReadFloat32((r6 + 76));
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 76));
    f1.d = (-(f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f1.d);
}

loc_805F06E8:
{
    r5 = MemoryInline::FlatRead32(r3);
    r4 = 1431633920;
    r4 = (r4 + 21846);
    r0 = MemoryInline::FlatRead8((r5 + 186));
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r4 + r0);
    r0 = (r0 & 255);
}

loc_805F0708:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F0720;
    }
}

loc_805F070C:
{
}

loc_805F0710:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_805F0740;
    }
}

loc_805F0714:
{
}

loc_805F0718:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_805F0760;
    }
}

loc_805F071C:
{
    goto loc_805F077C;
}

loc_805F0720:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 180));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 80));
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    goto loc_805F077C;
}

loc_805F0740:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 176));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 80));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    goto loc_805F077C;
}

loc_805F0760:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 176));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 80));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 80));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
}

loc_805F077C:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    r5 = (r1 + 68);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    r4 = MemoryInline::FlatRead32(r3);
    r3 = (r1 + 8);
    r29 = (r4 + 132);
    r4 = r29;
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
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r4 = r29;
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    r3 = (r1 + 32);
    r5 = (r1 + 56);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 12), f0.d);
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
    r4 = r29;
    r3 = (r1 + 20);
    r5 = (r1 + 44);
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
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_805F07F0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F07F8;
    }
}

loc_805F07F4:
{
    goto loc_805F07FC;
}

loc_805F07F8:
{
    f3.d = (-(f3.d));
}

loc_805F07FC:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805F0810:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F0818;
    }
}

loc_805F0814:
{
    goto loc_805F081C;
}

loc_805F0818:
{
    f1.d = (-(f1.d));
}

loc_805F081C:
{
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_805F0820:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F0828;
    }
}

loc_805F0824:
{
    goto loc_805F082C;
}

loc_805F0828:
{
    f1.d = f3.d;
}

loc_805F082C:
{
    MemoryInline::FlatWriteFloat32((r31 + 16), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_805F0844:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F084C;
    }
}

loc_805F0848:
{
    goto loc_805F0850;
}

loc_805F084C:
{
    f3.d = (-(f3.d));
}

loc_805F0850:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805F0864:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F086C;
    }
}

loc_805F0868:
{
    goto loc_805F0870;
}

loc_805F086C:
{
    f1.d = (-(f1.d));
}

loc_805F0870:
{
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_805F0874:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F087C;
    }
}

loc_805F0878:
{
    goto loc_805F0880;
}

loc_805F087C:
{
    f1.d = f3.d;
}

loc_805F0880:
{
    MemoryInline::FlatWriteFloat32((r31 + 20), f1.d);
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

// RECOMP_GUEST_ABI gpr_read=0xE000006B gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x0000104F fpr_write=0x00001F7F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805F0618 func_805F0618 preserves=true fpr_mask=0x00000000

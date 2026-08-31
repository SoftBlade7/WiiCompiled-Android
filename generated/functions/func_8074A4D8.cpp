#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8074A4D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8074A550_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8074A4D8;

loc_8074A4D8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = 0x808D0000u;
    r31 = (r31 + -18176);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r0 = MemoryInline::FlatRead32((r3 + 232));
    r4 = MemoryInline::FlatRead32((r3 + 828));
}

loc_8074A508:
{
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 828), r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8074A528;
    }
}

loc_8074A514:
{
}

loc_8074A518:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8074A5A0;
    }
}

loc_8074A51C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8074A520:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8074A624;
    }
}

loc_8074A524:
{
    goto loc_8074A6EC;
}

loc_8074A528:
{
    r0 = MemoryInline::FlatRead32((r3 + 836));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8074A530:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8074A53C;
    }
}

loc_8074A534:
{
    r0 = 3;
    goto loc_8074A548;
}

loc_8074A53C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8074A540:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8074A548;
    }
}

loc_8074A544:
{
    r0 = 0;
}

loc_8074A548:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r31 + 104);
    addr_lfsx_8074A550_loc_0 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_8074A550_loc_0);
    r3 = r30;
    r4 = (r30 + 808);
    ctx->lr = 0x8074A560u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80747494u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r30 + 828));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_8074A568:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8074A6EC;
    }
}

loc_8074A56C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    MemoryInline::FlatWriteFloat32((r30 + 364), f0.d);
    r0 = MemoryInline::FlatRead8((r30 + 368));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8074A580:
{
    MemoryInline::FlatWriteFloat32((r30 + 360), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8074A6EC;
    }
}

loc_8074A588:
{
    r3 = MemoryInline::FlatRead32((r30 + 232));
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 841), static_cast<uint8_t>(r0));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 232), r0);
    goto loc_8074A6EC;
}

loc_8074A5A0:
{
    r0 = MemoryInline::FlatRead16((r31 + 80));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8074A5A8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8074A608;
    }
}

loc_8074A5AC:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 128));
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 11320));
    MemoryInline::FlatWriteFloat32((r3 + 312), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 316), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 320), f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 100));
    MemoryInline::FlatWriteFloat32((r3 + 328), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 324), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 332), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 124));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    ctx->lr = 0x8074A5F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x807474E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 232));
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 828), r0);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 232), r0);
}

loc_8074A608:
{
    r0 = MemoryInline::FlatRead8((r30 + 841));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8074A610:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8074A6EC;
    }
}

loc_8074A614:
{
    r3 = (r30 + 176);
    r4 = (r30 + 636);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    goto loc_8074A6EC;
}

loc_8074A624:
{
    r0 = MemoryInline::FlatRead16((r31 + 82));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8074A62C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8074A638;
    }
}

loc_8074A630:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 32));
    ctx->lr = 0x8074A638u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80747530u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
}

loc_8074A638:
{
    r3 = MemoryInline::FlatRead32((r30 + 828));
    r0 = MemoryInline::FlatRead16((r31 + 84));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8074A644:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_8074A658;
    }
}

loc_8074A648:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    MemoryInline::FlatWriteFloat32((r30 + 364), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    MemoryInline::FlatWriteFloat32((r30 + 360), f0.d);
}

loc_8074A658:
{
    r3 = MemoryInline::FlatRead32((r30 + 828));
    r0 = MemoryInline::FlatRead16((r31 + 86));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8074A664:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8074A698;
    }
}

loc_8074A668:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r29 = 0x808A0000u;
    r5 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 11320));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 11324));
    r4 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r5 = 1;
    ctx->lr = 0x8074A68Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557684u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 11320));
    r3 = r30;
    ctx->lr = 0x8074A698u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x807474E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8074A698:
{
    r3 = MemoryInline::FlatRead32((r30 + 828));
    r0 = MemoryInline::FlatRead16((r31 + 88));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8074A6A4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_8074A6B4;
    }
}

loc_8074A6A8:
{
    r3 = (r30 + 176);
    r4 = (r30 + 372);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
}

loc_8074A6B4:
{
    r0 = MemoryInline::FlatRead8((r30 + 841));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8074A6BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8074A6EC;
    }
}

loc_8074A6C0:
{
    r3 = MemoryInline::FlatRead32((r30 + 828));
    r0 = MemoryInline::FlatRead16((r31 + 84));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8074A6CC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8074A6E0;
    }
}

loc_8074A6D0:
{
    r3 = (r30 + 176);
    r4 = (r30 + 592);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    goto loc_8074A6EC;
}

loc_8074A6E0:
{
    r3 = (r30 + 176);
    r4 = (r30 + 636);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
}

loc_8074A6EC:
{
    r3 = r30;
    ctx->lr = 0x8074A6F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x807476D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r30;
    ctx->lr = 0x8074A6FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x807475DCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = r30;
    // inline leaf 0x80747404 (36 guest instruction(s))
    r4 = MemoryInline::FlatRead16((r3 + 44));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    r0 = (r4 | 4);
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 264));
    MemoryInline::FlatWriteFloat32((r3 + 88), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 268));
    MemoryInline::FlatWriteFloat32((r3 + 92), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 272));
    MemoryInline::FlatWriteFloat32((r3 + 96), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 276));
    MemoryInline::FlatWriteFloat32((r3 + 100), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 280));
    MemoryInline::FlatWriteFloat32((r3 + 104), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 284));
    MemoryInline::FlatWriteFloat32((r3 + 108), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 288));
    MemoryInline::FlatWriteFloat32((r3 + 112), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 292));
    MemoryInline::FlatWriteFloat32((r3 + 116), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 296));
    MemoryInline::FlatWriteFloat32((r3 + 120), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 300));
    MemoryInline::FlatWriteFloat32((r3 + 124), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 304));
    MemoryInline::FlatWriteFloat32((r3 + 128), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 308));
    MemoryInline::FlatWriteFloat32((r3 + 132), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 276));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 292));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 308));
    MemoryInline::FlatWriteFloat32((r3 + 48), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 52), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 56), f2.d);
    // end of inlined leaf 0x80747404
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8074A4D8 func_8074A4D8 preserves=true fpr_mask=0x00000000

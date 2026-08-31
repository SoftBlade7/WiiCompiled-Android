#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808166D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_808166D0;

loc_808166D0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r4;
    ctx->lr = 0x808166F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081A980u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x808D0000u;
    r0 = 1127219200;
    r3 = (r3 + 25696);
    MemoryInline::FlatWrite32(r31, r3);
    r4 = 0x808B0000u;
    r5 = 0x808D0000u;
    r6 = MemoryInline::FlatRead32(r30);
    r3 = 0x808D0000u;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r0 = MemoryInline::FlatRead16((r6 + 42));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r5 + 25680), static_cast<uint16_t>(r0));
    f1.d = MemoryInline::FlatReadFloat64((r4 + -19384));
    r0 = MemoryInline::FlatRead16((r6 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 25684), f0.d);
    r0 = MemoryInline::FlatRead8((r31 + 84));
    r3 = MemoryInline::FlatRead16((r6 + 46));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80816748:
{
    MemoryInline::FlatWrite32((r31 + 320), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80816758;
    }
}

loc_80816750:
{
    r3 = (r31 + 72);
    goto loc_80816788;
}

loc_80816758:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 8);
    r4 = (r31 + 88);
    ctx->lr = 0x8081676Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = (r31 + 72);
    MemoryInline::FlatWriteFloat32((r31 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
}

loc_80816788:
{
    f2.d = MemoryInline::FlatReadFloat32(r3);
    r0 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    r4 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteFloat32((r31 + 308), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 312), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 316), f0.d);
    MemoryInline::FlatWrite8((r31 + 332), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 333), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead8((r3 + 37));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_808167C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808167EC;
    }
}

loc_808167C4:
{
    r3 = 124;
    ctx->lr = 0x808167CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808167D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808167E4;
    }
}

loc_808167D4:
{
    r4 = 0x808B0000u;
    r5 = 0;
    r4 = (r4 + -19344);
    ctx->lr = 0x808167E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80222CCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_808167E4:
{
    MemoryInline::FlatWrite32((r31 + 336), r3);
    goto loc_808167F0;
}

loc_808167EC:
{
    MemoryInline::FlatWrite32((r31 + 336), r4);
}

loc_808167F0:
{
    r3 = 0x809C0000u;
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = MemoryInline::FlatRead32((r4 + -10448));
    r0 = MemoryInline::FlatRead32((r5 + 2928));
}

loc_80816808:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_80816848;
    }
}

loc_8081680C:
{
    r0 = MemoryInline::FlatRead32((r5 + 2936));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80816814:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8081682C;
    }
}

loc_80816818:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & -5);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    goto loc_80816890;
}

loc_8081682C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80816830:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80816890;
    }
}

loc_80816834:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & -5);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    goto loc_80816890;
}

loc_80816848:
{
}

loc_8081684C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_80816858;
    }
}

loc_80816850:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_80816854:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80816890;
    }
}

loc_80816858:
{
    r0 = MemoryInline::FlatRead32((r5 + 2936));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80816860:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80816878;
    }
}

loc_80816864:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & -5);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    goto loc_80816890;
}

loc_80816878:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8081687C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80816890;
    }
}

loc_80816880:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & -5);
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_80816890:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x808166D0 func_808166D0 preserves=true fpr_mask=0x00000000

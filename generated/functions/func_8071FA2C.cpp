#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071FA2C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8071FA2C;

loc_8071FA2C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r7 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r7 = (r7 + 8376);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = 0x808D0000u;
    r31 = (r31 + -27448);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 340));
}

loc_8071FA5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8071FA74;
    }
}

loc_8071FA60:
{
}

loc_8071FA64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8071FB40;
    }
}

loc_8071FA68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8071FA6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071FBC4;
    }
}

loc_8071FA70:
{
    goto loc_8071FC30;
}

loc_8071FA74:
{
    f0.d = MemoryInline::FlatReadFloat32((r7 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8071FA7C:
{
    MemoryInline::FlatWriteFloat32((r3 + 348), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 352), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071FC30;
    }
}

loc_8071FA88:
{
    r9 = MemoryInline::FlatRead32(r6);
    r3 = (r1 + 32);
    r8 = MemoryInline::FlatRead32((r6 + 4));
    r7 = MemoryInline::FlatRead32((r6 + 8));
    r6 = MemoryInline::FlatRead32(r5);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWriteRam32((r1 + 32), r9);
    MemoryInline::FlatWriteRam32((r1 + 36), r8);
    MemoryInline::FlatWriteRam32((r1 + 40), r7);
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    MemoryInline::FlatWriteRam32((r1 + 24), r4);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    ctx->lr = 0x8071FAC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 84));
    r3 = (r1 + 8);
    r4 = (r1 + 32);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r5 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r30 + 340));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 92));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r0 = (r3 + 1);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    f6.d = MemoryInline::FlatReadFloat32((r30 + 24));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f5.d);
    MemoryInline::FlatWriteFloat32((r30 + 12), f6.d);
    MemoryInline::FlatWrite8((r30 + 337), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r30 + 344), r4);
    MemoryInline::FlatWrite32((r30 + 340), r0);
    goto loc_8071FC30;
}

loc_8071FB40:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 352));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 96));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 352), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8071FB58:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8071FB60;
    }
}

loc_8071FB5C:
{
    MemoryInline::FlatWriteFloat32((r3 + 352), f0.d);
}

loc_8071FB60:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 348));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 96));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 20));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 348), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8071FB78:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071FB80;
    }
}

loc_8071FB7C:
{
    MemoryInline::FlatWriteFloat32((r3 + 348), f0.d);
}

loc_8071FB80:
{
    r4 = MemoryInline::FlatRead32((r3 + 344));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 344), r4);
    r0 = MemoryInline::FlatRead16((r31 + 104));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8071FB94:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071FC30;
    }
}

loc_8071FB98:
{
    r4 = MemoryInline::FlatRead32((r3 + 340));
    r5 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r7 + 24));
    f0.d = MemoryInline::FlatReadFloat32(r7);
    r0 = (r4 + 1);
    MemoryInline::FlatWriteFloat32((r3 + 232), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 236), f0.d);
    MemoryInline::FlatWrite8((r3 + 337), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r3 + 344), r5);
    MemoryInline::FlatWrite32((r3 + 340), r0);
    goto loc_8071FC30;
}

loc_8071FBC4:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 352));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 100));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 352), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8071FBDC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071FBE4;
    }
}

loc_8071FBE0:
{
    MemoryInline::FlatWriteFloat32((r3 + 352), f0.d);
}

loc_8071FBE4:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 348));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 100));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 348), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8071FBFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8071FC04;
    }
}

loc_8071FC00:
{
    MemoryInline::FlatWriteFloat32((r3 + 348), f0.d);
}

loc_8071FC04:
{
    r4 = MemoryInline::FlatRead32((r3 + 344));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 344), r4);
    r0 = MemoryInline::FlatRead16((r31 + 106));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8071FC18:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071FC30;
    }
}

loc_8071FC1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r7 + 4));
    r0 = 0;
    MemoryInline::FlatWriteFloat32((r3 + 348), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 352), f0.d);
    MemoryInline::FlatWrite32((r3 + 340), r0);
}

loc_8071FC30:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00003FF gpr_write=0xC00003FB gpr_return=0x00000018 fpr_read=0x8000007F fpr_write=0x8000007F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8071FA2C func_8071FA2C preserves=true fpr_mask=0x00000000

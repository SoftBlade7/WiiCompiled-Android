#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80568AA8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80568AA8;

loc_80568AA8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead16((r3 + 204));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80568ACC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80568BBC;
    }
}

loc_80568AD0:
{
    r4 = MemoryInline::FlatRead32((r3 + 228));
}

loc_80568AD8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80568B58;
    }
}

loc_80568ADC:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 224));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 208));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80568AF0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80568B38;
    }
}

loc_80568AF4:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 212));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 216));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 212), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80568B0C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80568B14;
    }
}

loc_80568B10:
{
    MemoryInline::FlatWriteFloat32((r3 + 212), f1.d);
}

loc_80568B14:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 216));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 220));
    r4 = MemoryInline::FlatRead32((r3 + 228));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 216), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80568B30:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80568B38;
    }
}

loc_80568B34:
{
    MemoryInline::FlatWriteFloat32((r3 + 216), f1.d);
}

loc_80568B38:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 208));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 212));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 224));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 208), f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80568B50:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80568B58;
    }
}

loc_80568B54:
{
    MemoryInline::FlatWriteFloat32((r3 + 208), f2.d);
}

loc_80568B58:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 208));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 44));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80568B64:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80568BBC;
    }
}

loc_80568B6C:
{
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & 262144);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80568B7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80568BBC;
    }
}

loc_80568B80:
{
    r0 = MemoryInline::FlatRead16((r3 + 204));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r3 + 204), static_cast<uint16_t>(r0));
    r3 = r30;
    // inline leaf 0x80590A6C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590A6C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80568B98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80568BAC;
    }
}

loc_80568B9C:
{
    r3 = r30;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 368), static_cast<uint8_t>(r0));
}

loc_80568BAC:
{
    r3 = r30;
    // inline leaf 0x805903AC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // end of inlined leaf 0x805903AC
    r4 = (r30 + 176);
    ctx->lr = 0x80568BBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8059FE94u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_80568BBC:
{
    r0 = MemoryInline::FlatRead32((r30 + 196));
}

loc_80568BC4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(100))) {
        goto loc_80568BEC;
    }
}

loc_80568BC8:
{
    r0 = MemoryInline::FlatRead16((r30 + 204));
    r31 = 1;
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80568BD4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80568C24;
    }
}

loc_80568BD8:
{
    r3 = r30;
    // inline leaf 0x805903AC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // end of inlined leaf 0x805903AC
    r4 = (r30 + 176);
    ctx->lr = 0x80568BE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8059FE94u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    goto loc_80568C24;
}

loc_80568BEC:
{
    r0 = MemoryInline::FlatRead16((r30 + 204));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80568BF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80568C24;
    }
}

loc_80568BF8:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 208));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 5588));
    r3 = (r30 + 176);
    r4 = (r30 + 60);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctx->lr = 0x80568C14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023A0A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r3 = r30;
    // inline leaf 0x805903AC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // end of inlined leaf 0x805903AC
    r4 = (r30 + 176);
    ctx->lr = 0x80568C24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8059FD0Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_80568C24:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001F gpr_write=0xC000001B gpr_return=0x00000018 fpr_read=0xC000001F fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80568AA8 func_80568AA8 preserves=true fpr_mask=0x00000000

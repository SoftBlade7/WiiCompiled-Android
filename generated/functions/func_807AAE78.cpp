#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807AAE78(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807AAE78;

loc_807AAE78:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r0 = (r0 & 32768);
}

loc_807AAE94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807AAEA0;
    }
}

loc_807AAE98:
{
    r0 = MemoryInline::FlatRead8((r3 + 108));
    goto loc_807AAEA4;
}

loc_807AAEA0:
{
    r0 = 12;
}

loc_807AAEA4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
}

loc_807AAEA8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807AAEB4;
    }
}

loc_807AAEAC:
{
    r0 = 12;
    goto loc_807AAF08;
}

loc_807AAEB4:
{
    r3 = 0x809C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r5 = MemoryInline::FlatRead32((r3 + -10448));
    r3 = MemoryInline::FlatRead32((r5 + 12));
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r3 = MemoryInline::FlatRead8((r3 + 32));
    r0 = (r3 + -1);
    r4 = (r0 & 255);
}

loc_807AAED8:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(1))) {
        goto loc_807AAEE4;
    }
}

loc_807AAEDC:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r3 + 14520));
}

loc_807AAEE4:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r3 + 14520));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_807AAEF0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807AAF04;
    }
}

loc_807AAEF4:
{
    r0 = MemoryInline::FlatRead32((r5 + 24));
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + -1));
    goto loc_807AAF08;
}

loc_807AAF04:
{
    r0 = 12;
}

loc_807AAF08:
{
    r3 = 0x808A0000u;
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 23228));
    r3 = r31;
    f2.d = MemoryInline::FlatReadFloat32((r4 + 23232));
    r4 = (r0 & 255);
    r5 = 0;
    ctx->lr = 0x807AAF28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x807B5068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r31 + 116));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807AAF30:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807AAFF0;
    }
}

loc_807AAF34:
{
    r0 = MemoryInline::FlatRead32((r31 + 700));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1800));
}

loc_807AAF3C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807AAF54;
    }
}

loc_807AAF40:
{
    r3 = r31;
    ctx->lr = 0x807AAF48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x807B532Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 696), r0);
    goto loc_807AAFF0;
}

loc_807AAF54:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
}

loc_807AAF58:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807AAFA4;
    }
}

loc_807AAF5C:
{
    r3 = r31;
    r4 = 1;
    r5 = 1;
    ctx->lr = 0x807AAF6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x807B3BACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807AAF70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807AAFF0;
    }
}

loc_807AAF74:
{
    r0 = MemoryInline::FlatRead32((r31 + 124));
    r3 = 4;
    MemoryInline::FlatWrite32((r31 + 696), r3);
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807AAF84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807AAFF0;
    }
}

loc_807AAF88:
{
    r4 = MemoryInline::FlatRead32((r31 + 640));
    r3 = 1;
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = MemoryInline::FlatRead8((r4 + 24));
    r5 = (r0 & 65535);
    ctx->lr = 0x807AAFA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8079C554u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_807AAFF0;
}

loc_807AAFA4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_807AAFA8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807AAFF0;
    }
}

loc_807AAFAC:
{
    r3 = r31;
    r4 = 1;
    r5 = 0;
    ctx->lr = 0x807AAFBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x807B3BACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807AAFC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807AAFF0;
    }
}

loc_807AAFC4:
{
    r0 = MemoryInline::FlatRead32((r31 + 124));
    r3 = 4;
    MemoryInline::FlatWrite32((r31 + 696), r3);
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807AAFD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807AAFF0;
    }
}

loc_807AAFD8:
{
    r4 = MemoryInline::FlatRead32((r31 + 640));
    r3 = 1;
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = MemoryInline::FlatRead8((r4 + 24));
    r5 = (r0 & 65535);
    ctx->lr = 0x807AAFF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8079C554u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807AAFF0:
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
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807AAE78 func_807AAE78 preserves=true fpr_mask=0x00000000

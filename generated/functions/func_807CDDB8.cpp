#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807CDDB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807CDDB8;

loc_807CDDB8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 324));
}

loc_807CDDD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CDEEC;
    }
}

loc_807CDDD8:
{
    r0 = MemoryInline::FlatRead8((r3 + 214));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CDDE0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807CDEEC;
    }
}

loc_807CDDE4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807CDF14u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = r31;
    ctx->lr = 0x807CDDF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x807CE270u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r31 + 329));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CDDF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CDE04;
    }
}

loc_807CDDFC:
{
    r3 = r31;
    ctx->lr = 0x807CDE04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x807CE6D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
}

loc_807CDE04:
{
    r3 = r31;
    ctx->lr = 0x807CDE0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x807CECD4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 812));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 780));
    r3 = MemoryInline::FlatRead32((r31 + 676));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CDE1C:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 12));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CDE34;
    }
}

loc_807CDE24:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 780), f0.d);
}

loc_807CDE34:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 820));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 788));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CDE44:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CDE58;
    }
}

loc_807CDE48:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 788), f0.d);
}

loc_807CDE58:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 808));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 780));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CDE68:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CDE7C;
    }
}

loc_807CDE6C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 780), f0.d);
}

loc_807CDE7C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 816));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 788));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CDE8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CDEA0;
    }
}

loc_807CDE90:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 788), f0.d);
}

loc_807CDEA0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 800));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 776));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CDEB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CDEC4;
    }
}

loc_807CDEB4:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 776), f0.d);
}

loc_807CDEC4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 804));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 784));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CDED4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CDF00;
    }
}

loc_807CDED8:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 784), f0.d);
    goto loc_807CDF00;
}

loc_807CDEEC:
{
    r0 = MemoryInline::FlatRead32((r3 + 740));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CDEF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CDF00;
    }
}

loc_807CDEF8:
{
    r3 = r31;
    ctx->lr = 0x807CDF00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x807CECD4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
}

loc_807CDF00:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFC01FFB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFF03FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x807CDDB8 func_807CDDB8 preserves=true fpr_mask=0x00000000

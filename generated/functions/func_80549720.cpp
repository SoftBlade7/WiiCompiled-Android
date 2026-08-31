#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80549720(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80549720;

loc_80549720:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r5 = (r3 + 65536);
    r4 = 131072;
    r0 = MemoryInline::FlatRead32((r5 + -28000));
    r6 = (r4 + -31073);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
}

loc_8054974C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r6))) {
        goto loc_80549754;
    }
}

loc_80549750:
{
    r6 = r0;
}

loc_80549754:
{
    r5 = (r3 + 65536);
    r4 = 131072;
    r5 = MemoryInline::FlatRead32((r5 + -28004));
    r0 = (r4 + -31073);
}

loc_80549768:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_80549770;
    }
}

loc_8054976C:
{
    r0 = r5;
}

loc_80549770:
{
    r5 = (r3 + 65536);
    r4 = 131072;
    r7 = MemoryInline::FlatRead32((r5 + -28008));
    r5 = (r4 + -31073);
    r31 = (r0 + r6);
}

loc_80549788:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r5))) {
        goto loc_80549790;
    }
}

loc_8054978C:
{
    r5 = r7;
}

loc_80549790:
{
    r4 = (r3 + 65536);
    r3 = 131072;
    r4 = MemoryInline::FlatRead32((r4 + -28012));
    r0 = (r3 + -31073);
}

loc_805497A4:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_805497AC;
    }
}

loc_805497A8:
{
    r0 = r4;
}

loc_805497AC:
{
    r4 = (r0 + r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805497C0;
    }
}

loc_805497B4:
{
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 3360));
    goto loc_805497F4;
}

loc_805497C0:
{
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021A60u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    f31.d = f1.d;
    r4 = r31;
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021A60u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 3396));
    f0.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f31.d));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_805497EC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805497F4;
    }
}

loc_805497F0:
{
    f1.d = f2.d;
}

loc_805497F4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 36));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800007FB gpr_write=0x800007FB gpr_return=0x00000018 fpr_read=0x80000007 fpr_write=0x80000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80549720 func_80549720 preserves=false fpr_mask=0x80000000

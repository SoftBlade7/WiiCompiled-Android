#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80037450(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    goto loc_80037450;

loc_80037450:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30812));
    f0.d = MemoryInline::FlatReadFloat32(r5);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80037468:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80037480;
    }
}

loc_8003746C:
{
    PpcSetPairedFprInline(f3, PPC_Fres(PPC_PsFromScalarInline(f0.d)));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f3.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsMulInline(f3.d, f3.d));
    PpcSetPairedFprInline(f3, PPC_PsNmsubInline(PPC_PsFromScalarInline(f0.d), f1.d, f2.d));
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    goto loc_80037484;
}

loc_80037480:
{
    f3.d = MemoryInline::FlatReadFloat32((r2 + -30764));
}

loc_80037484:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30812));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80037494:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800374AC;
    }
}

loc_80037498:
{
    PpcSetPairedFprInline(f3, PPC_Fres(PPC_PsFromScalarInline(f0.d)));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f3.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsMulInline(f3.d, f3.d));
    PpcSetPairedFprInline(f3, PPC_PsNmsubInline(PPC_PsFromScalarInline(f0.d), f1.d, f2.d));
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    goto loc_800374B0;
}

loc_800374AC:
{
    f3.d = MemoryInline::FlatReadFloat32((r2 + -30764));
}

loc_800374B0:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30812));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f3.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800374C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800374D8;
    }
}

loc_800374C4:
{
    PpcSetPairedFprInline(f1, PPC_Fres(PPC_PsFromScalarInline(f0.d)));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f1.d, f1.d));
    PpcSetPairedFprInline(f1, PPC_PsMulInline(f1.d, f1.d));
    PpcSetPairedFprInline(f1, PPC_PsNmsubInline(PPC_PsFromScalarInline(f0.d), f1.d, f2.d));
    f1.d = PPC_PsToScalarInline(f1.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    goto loc_800374DC;
}

loc_800374D8:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30764));
}

loc_800374DC:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    r5 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x800857B0u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003E gpr_write=0x00000023 gpr_return=0x00000000 fpr_read=0x00000001 fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80037450 func_80037450 preserves=true fpr_mask=0x00000000

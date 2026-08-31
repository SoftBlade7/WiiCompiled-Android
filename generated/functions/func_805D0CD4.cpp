#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805D0CD4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805D0CD4;

loc_805D0CD4:
{
    r0 = MemoryInline::FlatRead8((r3 + 21036));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805D0CDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_805D0CE0:
{
    r4 = MemoryInline::FlatRead32((r3 + 21032));
    r0 = MemoryInline::FlatRead32((r3 + 21028));
    r4 = (r4 * 28);
}

loc_805D0CF0:
{
    r5 = (r3 + r4);
    MemoryInline::FlatWrite32((r5 + 20580), r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805D0D24;
    }
}

loc_805D0CFC:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 80));
    MemoryInline::FlatWriteFloat32((r5 + 20592), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 80));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r5 + 20596), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 80));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r5 + 20600), f0.d);
}

loc_805D0D24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 84));
    MemoryInline::FlatWriteFloat32((r5 + 20588), f0.d);
    r4 = MemoryInline::FlatRead32((r3 + 21032));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805D0D34:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805D0D70;
    }
}

loc_805D0D38:
{
    r0 = (r4 + -1);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 20592));
    r0 = (r0 * 28);
    r4 = (r3 + r0);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 20592));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805D0D50:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805D0D58;
    }
}

loc_805D0D54:
{
    goto loc_805D0D5C;
}

loc_805D0D58:
{
    f2.d = f0.d;
}

loc_805D0D5C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 88));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 88), f0.d);
}

loc_805D0D70:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 20596));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 88), f0.d);
    MemoryInline::FlatWriteFloat32((r5 + 20584), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 20600));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 88), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805D0CD4 func_805D0CD4 preserves=true fpr_mask=0x00000000

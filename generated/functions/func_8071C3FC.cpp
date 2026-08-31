#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071C3FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8071C3FC;

loc_8071C3FC:
{
    f2.d = std::fabs(f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    r4 = 0x808D0000u;
    MemoryInline::FlatWriteFloat32((r3 + 16), f1.d);
    r4 = (r4 + -27608);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8071C418:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071C420;
    }
}

loc_8071C41C:
{
    MemoryInline::FlatWriteFloat32((r3 + 20), f2.d);
}

loc_8071C420:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8071C42C:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071C518;
    }
}

loc_8071C434:
{
    r0 = MemoryInline::FlatRead8((r3 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8071C43C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8071C518;
    }
}

loc_8071C440:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_8071C448:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8071C470;
    }
}

loc_8071C44C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 24));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 28));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f4.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_8071C490;
}

loc_8071C470:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 20));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f4.d = PpcFmulsInline(f1.d, f0.d);
}

loc_8071C490:
{
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8276));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8071C49C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8071C4A4;
    }
}

loc_8071C4A0:
{
    f2.d = f0.d;
}

loc_8071C4A4:
{
    f3.d = MemoryInline::FlatReadFloat32((r3 + 4));
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8276));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_8071C4BC:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f1.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071C4EC;
    }
}

loc_8071C4C8:
{
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8071C4CC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071C4D8;
    }
}

loc_8071C4D0:
{
    f1.d = f4.d;
    goto loc_8071C4E4;
}

loc_8071C4D8:
{
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8071C4DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8071C4E4;
    }
}

loc_8071C4E0:
{
    f1.d = f0.d;
}

loc_8071C4E4:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f1.d);
    goto loc_8071C50C;
}

loc_8071C4EC:
{
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8071C4F0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071C4FC;
    }
}

loc_8071C4F4:
{
    f1.d = f0.d;
    goto loc_8071C508;
}

loc_8071C4FC:
{
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8071C500:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8071C508;
    }
}

loc_8071C504:
{
    f1.d = f4.d;
}

loc_8071C508:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f1.d);
}

loc_8071C50C:
{
    r4 = MemoryInline::FlatRead32((r3 + 28));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r3 + 28), r0);
}

loc_8071C518:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 40), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8071C3FC func_8071C3FC preserves=true fpr_mask=0x00000000

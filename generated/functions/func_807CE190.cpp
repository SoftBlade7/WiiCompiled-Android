#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807CE190(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_807CE190;

loc_807CE190:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 812));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 780));
    r4 = MemoryInline::FlatRead32((r3 + 676));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CE1A0:
{
    f2.d = MemoryInline::FlatReadFloat32((r4 + 12));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CE1B8;
    }
}

loc_807CE1A8:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 780), f0.d);
}

loc_807CE1B8:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 820));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 788));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CE1C8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CE1DC;
    }
}

loc_807CE1CC:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 788), f0.d);
}

loc_807CE1DC:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 808));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 780));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CE1EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CE200;
    }
}

loc_807CE1F0:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 780), f0.d);
}

loc_807CE200:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 816));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 788));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CE210:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CE224;
    }
}

loc_807CE214:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 788), f0.d);
}

loc_807CE224:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 800));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 776));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CE234:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CE248;
    }
}

loc_807CE238:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 776), f0.d);
}

loc_807CE248:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 804));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 784));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CE258:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_807CE25C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 784), f0.d);
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000010 gpr_return=0x00000010 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807CE190 func_807CE190 preserves=true fpr_mask=0x00000000

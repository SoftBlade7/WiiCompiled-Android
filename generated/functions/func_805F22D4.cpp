#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805F22D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805F22D4;

loc_805F22D4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
}

loc_805F22D8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805F237C;
    }
}

loc_805F22DC:
{
    r0 = (r4 * 92);
    r5 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 152));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805F22EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F22F8;
    }
}

loc_805F22F0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

loc_805F22F8:
{
    r4 = 0x809C0000u;
    r3 = 0x80890000u;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    f4.d = MemoryInline::FlatReadFloat32((r3 + 23920));
    r4 = MemoryInline::FlatRead32(r4);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 156));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 1008));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805F231C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F2328;
    }
}

loc_805F2320:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

loc_805F2328:
{
    r3 = 0x80890000u;
    f3.d = MemoryInline::FlatReadFloat32((r3 + 23924));
    f0.d = PpcFmulsInline(f3.d, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805F2338:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F2344;
    }
}

loc_805F233C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

loc_805F2344:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 1012));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 160));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805F2354:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F2360;
    }
}

loc_805F2358:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

loc_805F2360:
{
    f0.d = PpcFmulsInline(f3.d, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805F2368:
{
    r0 = cr;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

loc_805F237C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805F22D4 func_805F22D4 preserves=true fpr_mask=0x00000000

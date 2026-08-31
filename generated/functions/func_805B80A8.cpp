#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B80A8(CpuContext* MKW_RESTRICT ctx)
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;

    goto loc_805B80A8;

loc_805B80A8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    f1.d = MemoryInline::FlatReadFloat32(r4);
    r8 = r3;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r7 = MemoryInline::FlatRead32(r3);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r6 = MemoryInline::FlatRead32((r7 + 4));
    r0 = MemoryInline::FlatRead32((r7 + 8));
    SetCRFloatResident(cr, 0, f4.d, f2.d);
}

loc_805B80D4:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    r0 = MemoryInline::FlatRead32((r7 + 12));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B812C;
    }
}

loc_805B8100:
{
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 10156));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_805B810C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805B812C;
    }
}

loc_805B8110:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f4.d = f2.d;
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
}

loc_805B812C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r3 = r5;
    r4 = (r1 + 8);
    r5 = (r8 + 24);
    f0.d = PpcFmulsInline(f0.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x8019A91Cu>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x0000105F fpr_write=0x00001F7F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805B80A8 func_805B80A8 preserves=true fpr_mask=0x00000000

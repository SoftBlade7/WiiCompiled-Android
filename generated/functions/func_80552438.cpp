#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80552438(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80552438;

loc_80552438:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r5 = (r5 + -5376);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead32((r5 + 160));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80552468:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80552544;
    }
}

loc_8055246C:
{
    r0 = MemoryInline::FlatRead8((r5 + 167));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80552474:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80552544;
    }
}

loc_80552478:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8012409Cu>(ctx);
    r3 = ctx->gpr[3];
}

loc_80552480:
{
    r31 = 48;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8055248C;
    }
}

loc_80552488:
{
    r31 = 32;
}

loc_8055248C:
{
}

loc_80552490:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(127))) {
        goto loc_80552498;
    }
}

loc_80552494:
{
    r29 = 127;
}

loc_80552498:
{
}

loc_8055249C:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(0))) {
        goto loc_805524A4;
    }
}

loc_805524A0:
{
    r29 = 0;
}

loc_805524A4:
{
    r3 = 65536;
    r0 = (r3 + -5536);
}

loc_805524B0:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(r0))) {
        goto loc_805524B8;
    }
}

loc_805524B4:
{
    r30 = r0;
}

loc_805524B8:
{
}

loc_805524BC:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(0))) {
        goto loc_805524C4;
    }
}

loc_805524C0:
{
    r30 = 0;
}

loc_805524C4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r29 ^ -2147483648);
    r5 = 1127219200;
    r4 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = MemoryInline::FlatReadFloat64((r4 + 4528));
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_805524E8:
{
    r4 = (r4 + -5376);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r4 + 224), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055252C;
    }
}

loc_805524FC:
{
    r0 = (r31 * r30);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 220));
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRam32((r4 + 232), r0);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteRamFloat32((r4 + 228), f0.d);
    goto loc_80552538;
}

loc_8055252C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r4 + 232), r0);
    MemoryInline::FlatWriteRamFloat32((r4 + 220), f1.d);
}

loc_80552538:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 1;
    goto loc_80552548;
}

loc_80552544:
{
    r3 = 0;
}

loc_80552548:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000003B gpr_write=0xE000003B gpr_return=0x00000018 fpr_read=0x00000004 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80552438 func_80552438 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80018814(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80018814;

loc_80018814:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f31.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r0 = 1048576;
    r4 = 0;
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r3 = MemoryInline::FlatRead32((r1 + 12));
}

loc_8001883C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_80018898;
    }
}

loc_80018840:
{
    r0 = (r5 & 2147483647);
    r0 = (r0 | r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80018864;
    }
}

loc_8001884C:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32000));
    r0 = 33;
    f0.d = MemoryInline::FlatReadFloat64((r13 + -27568));
    MemoryInline::FlatWrite32((r13 + -27600), r0);
    f1.d = (f1.d / f0.d);
    goto loc_80018914;
}

loc_80018864:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80018868:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80018884;
    }
}

loc_8001886C:
{
    f1.d = (f1.d - f1.d);
    f0.d = MemoryInline::FlatReadFloat64((r13 + -27568));
    r0 = 33;
    MemoryInline::FlatWrite32((r13 + -27600), r0);
    f1.d = (f1.d / f0.d);
    goto loc_80018914;
}

loc_80018884:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31992));
    r4 = -54;
    f1.d = (f1.d * f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r5 = MemoryInline::FlatRead32((r1 + 8));
}

loc_80018898:
{
    r0 = 2146435072;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_800188A0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800188AC;
    }
}

loc_800188A4:
{
    f1.d = (f1.d + f1.d);
    goto loc_80018914;
}

loc_800188AC:
{
    r3 = (static_cast<int32_t>(r5) >> 20);
    r0 = 1127219200;
    r3 = (r4 + r3);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r4 = (r3 + -1023);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31960));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r4 + r3);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (1023 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1023) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
    r0 = (r0_rot_1 & -1048576);
    r0_mrot_1 = (r5 & 1048575);
    r0_mdest_1 = (r0 & -1048576);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f31.d = (f0.d - f1.d);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80018560u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31976));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31984));
    f3.d = (f0.d * f1.d);
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31968));
    f1.d = (f2.d * f31.d);
    f0.d = (f0.d * f31.d);
    f1.d = (f1.d + f3.d);
    f1.d = (f1.d + f0.d);
}

loc_80018914:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000021FF gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x80001FFF fpr_write=0x80001FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80018814 func_80018814 preserves=false fpr_mask=0x80000000

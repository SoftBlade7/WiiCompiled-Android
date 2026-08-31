#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F19A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801F19A4;

loc_801F19A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F19A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F19B4;
    }
}

loc_801F19AC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801F19B4:
{
    r8 = (r3 & 255);
    r0 = (r3 & 65280);
}

loc_801F19C0:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(26))) {
        goto loc_801F19CC;
    }
}

loc_801F19C4:
{
}

loc_801F19C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(768))) {
        goto loc_801F19D4;
    }
}

loc_801F19CC:
{
    r0 = 1;
    goto loc_801F1A60;
}

loc_801F19D4:
{
    r4 = (r8 * 56);
    r5 = 0x80360000u;
    r0 = 13;
    r5 = (r5 + -23936);
    r4 = (r5 + r4);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r7 = (r7_rot_0 & 65535);
    r6 = (r4 + 420);
    r4 = 0;
    ctr = r0;
}

loc_801F19F8:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & 524280);
    r9 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r9 + 8));
}

loc_801F1A08:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r6))) {
        goto loc_801F1A18;
    }
}

loc_801F1A0C:
{
    r0 = MemoryInline::FlatRead32((r9 + 4));
}

loc_801F1A14:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r0))) {
        goto loc_801F1A44;
    }
}

loc_801F1A18:
{
    r4 = (r4 + 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 524280);
    r9 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r9 + 8));
}

loc_801F1A2C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r6))) {
        goto loc_801F1A3C;
    }
}

loc_801F1A30:
{
    r0 = MemoryInline::FlatRead32((r9 + 4));
}

loc_801F1A38:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r0))) {
        goto loc_801F1A44;
    }
}

loc_801F1A3C:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801F19F8;
    }
}

loc_801F1A44:
{
    r5 = (r4 & 65535);
    r4 = 26;
    r0 = (r5 + -26);
    r4 = (r5 | ~r4);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    r0 = (r4 - r0);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 1);
}

loc_801F1A60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F1A64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F1A70;
    }
}

loc_801F1A68:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801F1A70:
{
    r0 = (r8 * 56);
    r4 = 0x80360000u;
    r4 = (r4 + -23936);
    r4 = (r4 + r0);
    r4 = (r4 + 420);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801F13ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F19A4 func_801F19A4 preserves=true fpr_mask=0x00000000

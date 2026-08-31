#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F3034(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801F3034;

loc_801F3034:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F3040:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = r3;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F3068;
    }
}

loc_801F3060:
{
    r3 = 1;
    goto loc_801F3198;
}

loc_801F3068:
{
    r9 = (r3 & 255);
    r4 = (r3 & 65280);
}

loc_801F3074:
{
    if ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(26))) {
        goto loc_801F3080;
    }
}

loc_801F3078:
{
}

loc_801F307C:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(1024))) {
        goto loc_801F3088;
    }
}

loc_801F3080:
{
    r3 = 1;
    goto loc_801F3114;
}

loc_801F3088:
{
    r5 = (r9 * 44);
    r6 = 0x80360000u;
    r4 = 13;
    r6 = (r6 + -23936);
    r5 = (r6 + r5);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r8 = (r8_rot_1 & 65535);
    r7 = (r5 + 1876);
    r5 = 0;
    ctr = r4;
}

loc_801F30AC:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r3 = (r3_rot_2 & 524280);
    r4 = (r6 + r3);
    r3 = MemoryInline::FlatRead32((r4 + 216));
}

loc_801F30BC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r7))) {
        goto loc_801F30CC;
    }
}

loc_801F30C0:
{
    r3 = MemoryInline::FlatRead32((r4 + 212));
}

loc_801F30C8:
{
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(r3))) {
        goto loc_801F30F8;
    }
}

loc_801F30CC:
{
    r5 = (r5 + 1);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r3 = (r3_rot_3 & 524280);
    r4 = (r6 + r3);
    r3 = MemoryInline::FlatRead32((r4 + 216));
}

loc_801F30E0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r7))) {
        goto loc_801F30F0;
    }
}

loc_801F30E4:
{
    r3 = MemoryInline::FlatRead32((r4 + 212));
}

loc_801F30EC:
{
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(r3))) {
        goto loc_801F30F8;
    }
}

loc_801F30F0:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801F30AC;
    }
}

loc_801F30F8:
{
    r5 = (r5 & 65535);
    r4 = 26;
    r3 = (r5 + -26);
    r4 = (r5 | ~r4);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(31));
    r3 = (r3_rot_5 & 2147483647);
    r3 = (r4 - r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
}

loc_801F3114:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F3118:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F3120;
    }
}

loc_801F311C:
{
    goto loc_801F3198;
}

loc_801F3120:
{
    r3 = (r9 * 44);
    r4 = 0x80360000u;
    r4 = (r4 + -23936);
    r29 = (r4 + r3);
    r3 = MemoryInline::FlatRead32((r29 + 1876));
    r3 = (r3 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F3138:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F3144;
    }
}

loc_801F313C:
{
    r3 = 14;
    goto loc_801F3198;
}

loc_801F3144:
{
    r3 = MemoryInline::FlatRead32((r29 + 1880));
    r4 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801F2534u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F3154:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F315C;
    }
}

loc_801F3158:
{
    goto loc_801F3198;
}

loc_801F315C:
{
    r3 = MemoryInline::FlatRead32((r29 + 1880));
    r4 = r30;
    ctx->lr = 0x801F3168u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801F1A8Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801F316C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801F3174;
    }
}

loc_801F3170:
{
    r31 = r3;
}

loc_801F3174:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801F3178:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F3184;
    }
}

loc_801F317C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
}

loc_801F3180:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F3194;
    }
}

loc_801F3184:
{
    r0 = MemoryInline::FlatRead32((r29 + 1876));
    r0 = (r0 & -3);
    r0 = (r0 & -25);
    MemoryInline::FlatWrite32((r29 + 1876), r0);
}

loc_801F3194:
{
    r3 = r31;
}

loc_801F3198:
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F3034 func_801F3034 preserves=true fpr_mask=0x00000000

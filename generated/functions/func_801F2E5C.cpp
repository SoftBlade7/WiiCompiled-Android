#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F2E5C(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801F2E5C;

loc_801F2E5C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F2E68:
{
    r4 = r3;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F2E84;
    }
}

loc_801F2E7C:
{
    r3 = 1;
    goto loc_801F301C;
}

loc_801F2E84:
{
    r8 = (r3 & 255);
    r0 = (r3 & 65280);
}

loc_801F2E90:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(26))) {
        goto loc_801F2E9C;
    }
}

loc_801F2E94:
{
}

loc_801F2E98:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1024))) {
        goto loc_801F2EA4;
    }
}

loc_801F2E9C:
{
    r3 = 1;
    goto loc_801F2F30;
}

loc_801F2EA4:
{
    r5 = (r8 * 44);
    r6 = 0x80360000u;
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r7 = (r7_rot_1 & 65535);
    r6 = (r6 + -23936);
    r5 = (r6 + r5);
    r0 = 13;
    r5 = (r5 + 1876);
    r3 = 0;
    ctr = r0;
}

loc_801F2EC8:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & 524280);
    r9 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r9 + 216));
}

loc_801F2ED8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_801F2EE8;
    }
}

loc_801F2EDC:
{
    r0 = MemoryInline::FlatRead32((r9 + 212));
}

loc_801F2EE4:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r0))) {
        goto loc_801F2F14;
    }
}

loc_801F2EE8:
{
    r3 = (r3 + 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 524280);
    r9 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r9 + 216));
}

loc_801F2EFC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_801F2F0C;
    }
}

loc_801F2F00:
{
    r0 = MemoryInline::FlatRead32((r9 + 212));
}

loc_801F2F08:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r0))) {
        goto loc_801F2F14;
    }
}

loc_801F2F0C:
{
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801F2EC8;
    }
}

loc_801F2F14:
{
    r5 = (r3 & 65535);
    r3 = 26;
    r0 = (r5 + -26);
    r3 = (r5 | ~r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_801F2F30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F2F34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F2F3C;
    }
}

loc_801F2F38:
{
    goto loc_801F301C;
}

loc_801F2F3C:
{
    r0 = (r8 * 44);
    r3 = 0x80360000u;
    r3 = (r3 + -23936);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 1876));
    r30 = (r3 + 1876);
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F2F58:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F3000;
    }
}

loc_801F2F5C:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
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

loc_801F2F68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F2F70;
    }
}

loc_801F2F6C:
{
    goto loc_801F301C;
}

loc_801F2F70:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    ctx->lr = 0x801F2F78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801F19A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F2F7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F2F84;
    }
}

loc_801F2F80:
{
    goto loc_801F301C;
}

loc_801F2F84:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r4 = (r1 + 8);
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
    InvokeDirectCpu<0x801F2220u>(ctx);
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

loc_801F2F94:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F2FB0;
    }
}

loc_801F2F9C:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r4 = 1;
    ctx->lr = 0x801F2FA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r31;
    goto loc_801F301C;
}

loc_801F2FB0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F2FB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F2FCC;
    }
}

loc_801F2FBC:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32(r30, r0);
    goto loc_801F2FD8;
}

loc_801F2FCC:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 & -17);
    MemoryInline::FlatWrite32(r30, r0);
}

loc_801F2FD8:
{
    r3 = r30;
    ctx->lr = 0x801F2FE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801F26F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F2FE4:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F3008;
    }
}

loc_801F2FEC:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r4 = 1;
    ctx->lr = 0x801F2FF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r31;
    goto loc_801F301C;
}

loc_801F3000:
{
    r3 = 13;
    goto loc_801F301C;
}

loc_801F3008:
{
    r0 = MemoryInline::FlatRead32(r30);
    r3 = 0;
    r0 = (r0 | 2);
    r0 = (r0 & -9);
    MemoryInline::FlatWrite32(r30, r0);
}

loc_801F301C:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F2E5C func_801F2E5C preserves=true fpr_mask=0x00000000

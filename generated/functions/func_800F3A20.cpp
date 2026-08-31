#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F3A20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r11_subfic_ra_0 = 0;
    uint32_t r1_addr_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mdest_3 = 0;
    uint32_t r6_mdest_4 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_mrot_3 = 0;
    uint32_t r6_mrot_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800F3A20;

loc_800F3A20:
{
    r11 = (r1 & 31);
    r12 = r1;
    r11_subfic_ra_0 = r11;
    r11 = (-160 - r11_subfic_ra_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-160) >= static_cast<uint32_t>(r11_subfic_ra_0) ? 1u : 0u) << 29);
    r1_addr_0 = (r1 + r11);
    MemoryInline::FlatWrite32(r1_addr_0, r1);
    r1 = r1_addr_0;
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r12 + 4), r0);
    r0 = 8;
    MemoryInline::FlatWriteRam32((r12 + -4), r31);
    r31 = 0x802F0000u;
    r3 = MemoryInline::FlatRead32((r31 + 9144));
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_800F3A50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F3A64;
    }
}

loc_800F3A54:
{
    r0 = 1;
    r3 = 1;
    MemoryInline::FlatWrite32((r13 + -26792), r0);
    goto loc_800F3BE0;
}

loc_800F3A64:
{
    ctx->lr = 0x800F3A68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F1C9Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F3A6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F3B6C;
    }
}

loc_800F3A70:
{
    r3 = MemoryInline::FlatRead32((r31 + 9144));
    r4 = (r1 + 64);
    r7 = (r1 + 40);
    r8 = (r1 + 32);
    r5 = 64;
    r6 = 0;
    ctx->lr = 0x800F3A8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F1340u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(7));
}

loc_800F3A90:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800F3A9C;
    }
}

loc_800F3A94:
{
    r5 = 1;
    goto loc_800F3B20;
}

loc_800F3A9C:
{
    r31 = (r31 + 9144);
    r3 = (r1 + 44);
    r4 = (r31 + 8);
    r5 = 4;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F3AB4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F3AC0;
    }
}

loc_800F3AB8:
{
    r5 = 1;
    goto loc_800F3B20;
}

loc_800F3AC0:
{
    r3 = MemoryInline::FlatRead16((r1 + 42));
    r0 = MemoryInline::FlatRead16((r31 + 6));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_800F3ACC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F3AD8;
    }
}

loc_800F3AD0:
{
    r5 = 1;
    goto loc_800F3B20;
}

loc_800F3AD8:
{
    r3 = (r1 + 64);
    r4 = (r13 + -31592);
    r5 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F3AEC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F3AF8;
    }
}

loc_800F3AF0:
{
    r5 = 1;
    goto loc_800F3B20;
}

loc_800F3AF8:
{
    r0 = MemoryInline::FlatRead8((r1 + 68));
    r5 = 0;
    r3 = MemoryInline::FlatRead8((r1 + 69));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r6 = (r6_rot_1 & 16711680);
    r4 = MemoryInline::FlatRead8((r1 + 67));
    r0 = MemoryInline::FlatRead8((r1 + 70));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & 65280);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r6_mrot_1 = (r6_rot_2 & -16777216);
    r6_mdest_1 = (r6 & 16777215);
    r6 = (r6_mdest_1 | r6_mrot_1);
    r6 = (r6 | r3);
    r31 = (r6 | r0);
}

loc_800F3B20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800F3B24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F3B6C;
    }
}

loc_800F3B28:
{
    r3 = 0x802F0000u;
    r3 = MemoryInline::FlatRead32((r3 + 9144));
    ctx->lr = 0x800F3B34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F11C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r31 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F3B38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F3B48;
    }
}

loc_800F3B3C:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r13 + -26792), r0);
    goto loc_800F3B64;
}

loc_800F3B48:
{
    r0 = (r31 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F3B4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F3B5C;
    }
}

loc_800F3B50:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r13 + -26792), r0);
    goto loc_800F3B64;
}

loc_800F3B5C:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -26792), r0);
}

loc_800F3B64:
{
    r3 = r0;
    goto loc_800F3BE0;
}

loc_800F3B6C:
{
    ctx->lr = 0x800F3B70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F24C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r10 = ctx->gpr[10];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = 0x802F0000u;
    r31 = (r5 + 9144);
    r4 = MemoryInline::FlatRead32((r31 + 80));
    r0 = (r4 + 2000);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_800F3B84:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F3BDC;
    }
}

loc_800F3B88:
{
    r0 = MemoryInline::FlatRead32((r31 + 84));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800F3B90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F3BAC;
    }
}

loc_800F3B94:
{
    r3 = MemoryInline::FlatRead32((r5 + 9144));
    ctx->lr = 0x800F3B9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F11C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 1;
    r3 = 1;
    MemoryInline::FlatWrite32((r13 + -26792), r0);
    goto loc_800F3BE0;
}

loc_800F3BAC:
{
    r3 = MemoryInline::FlatRead32((r5 + 9144));
    r4 = (r31 + 12);
    r5 = MemoryInline::FlatRead32((r31 + 76));
    r7 = (r31 + 4);
    r6 = 0;
    r8 = 8;
    ctx->lr = 0x800F3BC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F13D4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->lr = 0x800F3BCCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F24C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r10 = ctx->gpr[10];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r31 + 84));
    MemoryInline::FlatWriteRam32((r31 + 80), r3);
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r31 + 84), r0);
}

loc_800F3BDC:
{
    r3 = 0;
}

loc_800F3BE0:
{
    r10 = MemoryInline::FlatRead32(r1);
    r0 = MemoryInline::FlatRead32((r10 + 4));
    r31 = MemoryInline::FlatRead32((r10 + -4));
    ctx->lr = r0;
    r1 = r10;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800F3A20 func_800F3A20 preserves=true fpr_mask=0x00000000

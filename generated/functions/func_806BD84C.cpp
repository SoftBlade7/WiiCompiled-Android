#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806BD84C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806BD84C;

loc_806BD84C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 333));
}

loc_806BD868:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806BD880;
    }
}

loc_806BD86C:
{
}

loc_806BD870:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_806BD90C;
    }
}

loc_806BD874:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_806BD878:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806BD9A0;
    }
}

loc_806BD87C:
{
    goto loc_806BDA08;
}

loc_806BD880:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    // end of inlined leaf 0x80557340
    r0 = MemoryInline::FlatRead16((r3 + 8));
}

loc_806BD898:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_806BD8CC;
    }
}

loc_806BD89C:
{
    r0 = MemoryInline::FlatRead32((r31 + 288));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_806BD8A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806BD8CC;
    }
}

loc_806BD8A8:
{
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r3 = 0x808A0000u;
    r5 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + -3288));
    r3 = MemoryInline::FlatRead32((r4 + 40));
    r4 = 2;
    f2.d = MemoryInline::FlatReadFloat32((r5 + -3192));
    r5 = 1;
    ctx->lr = 0x806BD8CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557684u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806BD8CC:
{
    r4 = MemoryInline::FlatRead32((r31 + 308));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(40));
}

loc_806BD8D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806BDA08;
    }
}

loc_806BD8D8:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r31 + 336), static_cast<uint16_t>(r4));
    r3 = 0x808A0000u;
    r6 = 0x808A0000u;
    MemoryInline::FlatWrite8((r31 + 333), static_cast<uint8_t>(r0));
    r4 = 3;
    r7 = MemoryInline::FlatRead32((r31 + 8));
    r5 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r3 + -3288));
    r3 = MemoryInline::FlatRead32((r7 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r6 + -3192));
    ctx->lr = 0x806BD908u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557684u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806BDA08;
}

loc_806BD90C:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x80557340
    r0 = MemoryInline::FlatRead16((r3 + 8));
}

loc_806BD924:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_806BD958;
    }
}

loc_806BD928:
{
    r0 = MemoryInline::FlatRead32((r31 + 288));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_806BD930:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806BD958;
    }
}

loc_806BD934:
{
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r3 = 0x808A0000u;
    r5 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + -3288));
    r3 = MemoryInline::FlatRead32((r4 + 40));
    r4 = 3;
    f2.d = MemoryInline::FlatReadFloat32((r5 + -3192));
    r5 = 1;
    ctx->lr = 0x806BD958u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557684u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806BD958:
{
    r3 = MemoryInline::FlatRead16((r31 + 334));
    r0 = MemoryInline::FlatRead16((r31 + 336));
    r4 = MemoryInline::FlatRead32((r31 + 308));
    r0 = (r3 + r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_806BD96C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806BDA08;
    }
}

loc_806BD970:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 333), static_cast<uint8_t>(r0));
    r3 = 0x808A0000u;
    r5 = 0x808A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r5 + -3192));
    r5 = 1;
    r4 = MemoryInline::FlatRead32((r31 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + -3288));
    r3 = MemoryInline::FlatRead32((r4 + 40));
    r4 = 4;
    ctx->lr = 0x806BD99Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557684u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806BDA08;
}

loc_806BD9A0:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x80557340
    r0 = MemoryInline::FlatRead16((r3 + 8));
}

loc_806BD9B8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_806BD9EC;
    }
}

loc_806BD9BC:
{
    r0 = MemoryInline::FlatRead32((r31 + 288));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_806BD9C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806BD9EC;
    }
}

loc_806BD9C8:
{
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r3 = 0x808A0000u;
    r5 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + -3288));
    r3 = MemoryInline::FlatRead32((r4 + 40));
    r4 = 4;
    f2.d = MemoryInline::FlatReadFloat32((r5 + -3192));
    r5 = 1;
    ctx->lr = 0x806BD9ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557684u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806BD9EC:
{
    r3 = MemoryInline::FlatRead16((r31 + 334));
    r0 = MemoryInline::FlatRead32((r31 + 308));
    r3 = (r3 + 100);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_806BD9FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806BDA08;
    }
}

loc_806BDA00:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 304), r0);
}

loc_806BDA08:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806BD84C func_806BD84C preserves=true fpr_mask=0x00000000

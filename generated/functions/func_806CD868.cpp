#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806CD868(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80537B88_loc_0 = 0;
    uint32_t addr_lfsx_80537B88_loc_1 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806CD868;

loc_806CD868:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r4 = 0x808A0000u;
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + -968));
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r3;
    MemoryInline::FlatWrite32((r3 + 376), r6);
    r5 = MemoryInline::FlatRead32((r3 + 216));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 52));
    r5 = 0;
    MemoryInline::FlatWriteFloat32((r3 + 364), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 368), f0.d);
    goto loc_806CD8B4;
}

loc_806CD8A8:
{
    r4 = MemoryInline::FlatRead32((r3 + 380));
    r4_addr_2 = (r4 + r5);
    MemoryInline::FlatWrite8(r4_addr_2, static_cast<uint8_t>(r6));
    r5 = (r5 + 1);
}

loc_806CD8B4:
{
    r0 = MemoryInline::FlatRead8((r3 + 208));
}

loc_806CD8BC:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_806CD8A8;
    }
}

loc_806CD8C0:
{
    r4 = MemoryInline::FlatRead8((r3 + 444));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 396), static_cast<uint8_t>(r0));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_806CD8D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CD8F8;
    }
}

loc_806CD8D4:
{
    r4 = 0x802A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16688));
    r4 = (r4 + 16688);
    MemoryInline::FlatWriteFloat32((r3 + 400), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 404), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 408), f0.d);
    goto loc_806CD97C;
}

loc_806CD8F8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
}

loc_806CD8FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CD93C;
    }
}

loc_806CD900:
{
    r3 = MemoryInline::FlatRead32((r3 + 224));
    r31 = MemoryInline::FlatRead32((r3 + 12));
    r3 = r31;
    ctx->lr = 0x806CD910u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80821640u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r3 = (r1 + 20);
    r4 = (r31 + 88);
    r5 = 0;
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_0);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteFloat32((r30 + 400), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r30 + 404), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r30 + 408), f0.d);
    goto loc_806CD97C;
}

loc_806CD93C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
}

loc_806CD940:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CD97C;
    }
}

loc_806CD944:
{
    r3 = MemoryInline::FlatRead32((r3 + 224));
    r31 = MemoryInline::FlatRead32((r3 + 12));
    r3 = r31;
    ctx->lr = 0x806CD954u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80821640u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r3 = (r1 + 8);
    r4 = (r31 + 88);
    r5 = 2;
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_1 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_1);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32((r30 + 400), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r30 + 404), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r30 + 408), f0.d);
}

loc_806CD97C:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000007F gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0xFC00001F fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806CD868 func_806CD868 preserves=true fpr_mask=0x00000000

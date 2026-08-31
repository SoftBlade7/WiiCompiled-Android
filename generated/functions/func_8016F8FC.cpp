#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016F8FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8016F8FC;

loc_8016F8FC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26800));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    r4 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 78;
    r5 = 0;
    r7 = (r3 & 511);
    r5_mrot_0 = (r3 & 511);
    r5_mdest_0 = (r5 & -512);
    r5 = (r5_mdest_0 | r5_mrot_0);
    r6 = MemoryInline::FlatRead32((r2 + -26840));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r5_mrot_1 = (r5_rot_0 & -16777216);
    r5_mdest_1 = (r5 & 16777215);
    r5 = (r5_mdest_1 | r5_mrot_1);
    r0 = 0;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r5));
    r3 = (256 - r7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(256) >= static_cast<uint32_t>(r7) ? 1u : 0u) << 29);
}

loc_8016F948:
{
    MemoryInline::FlatWrite16((r6 + 2), static_cast<uint16_t>(r0));
    r0 = (r7 + -256);
    r3 = (r3 | r0);
    r0 = MemoryInline::FlatRead32((r6 + 572));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(11));
    r0_mrot_0 = (r0_rot_0 & 1024);
    r0_mdest_0 = (r0 & -1025);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite32((r6 + 572), r0);
    r0 = MemoryInline::FlatRead32((r6 + 564));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(22));
    r3 = (r3_rot_0 & 1023);
    r4 = (r3 + 1);
    r0 = (r4 + -1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & -256);
    r3 = PPC_Divwu(static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
    r3 = (r3 + 1);
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(128))) {
        goto loc_8016F9AC;
    }
}

loc_8016F980:
{
}

loc_8016F984:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(256))) {
        goto loc_8016F9AC;
    }
}

loc_8016F988:
{
    goto loc_8016F990;
}

loc_8016F98C:
{
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(31));
    r7 = (r7_rot_2 & 2147483647);
}

loc_8016F990:
{
    r0 = (r7 & 1);
}

loc_8016F994:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8016F98C;
    }
}

loc_8016F998:
{
    r0 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r7));
    r0 = (r0 * r7);
    r0 = (r4 - r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8016F9AC;
    }
}

loc_8016F9A8:
{
    r3 = (r3 + 1);
}

loc_8016F9AC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1024));
}

loc_8016F9B0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8016F9B8;
    }
}

loc_8016F9B4:
{
    r3 = 1024;
}

loc_8016F9B8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000DF gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8016F8FC func_8016F8FC preserves=true fpr_mask=0x00000000

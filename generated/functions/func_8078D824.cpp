#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8078D824(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8078D824;

loc_8078D824:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r7 = 0;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 12;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctr = r0;
}

loc_8078D848:
{
    r5 = (r3 + r4);
    r8 = MemoryInline::FlatRead32((r5 + 16));
}

loc_8078D854:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8078D8F8;
    }
}

loc_8078D858:
{
    r0 = MemoryInline::FlatRead32((r8 + 700));
}

loc_8078D860:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8078D86C;
    }
}

loc_8078D864:
{
    r0 = MemoryInline::FlatRead8((r8 + 692));
    goto loc_8078D870;
}

loc_8078D86C:
{
    r0 = 0;
}

loc_8078D870:
{
}

loc_8078D874:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8078D884;
    }
}

loc_8078D878:
{
    r5 = (r3 + r4);
    MemoryInline::FlatWrite32((r5 + 256), r7);
    goto loc_8078D894;
}

loc_8078D884:
{
    r6 = (r3 + r4);
    r5 = MemoryInline::FlatRead32((r6 + 256));
    r0 = (r5 + 1);
    MemoryInline::FlatWrite32((r6 + 256), r0);
}

loc_8078D894:
{
    r6 = (r3 + r4);
    r5 = MemoryInline::FlatRead32((r6 + 304));
}

loc_8078D8A0:
{
    r0 = (r5 + -1);
    MemoryInline::FlatWrite32((r6 + 304), r0);
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_8078D8D8;
    }
}

loc_8078D8AC:
{
    r0 = MemoryInline::FlatRead32((r8 + 700));
    r5 = MemoryInline::FlatRead32((r6 + 208));
}

loc_8078D8B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8078D8F8;
    }
}

loc_8078D8BC:
{
    f0.d = MemoryInline::FlatReadFloat32(r5);
    MemoryInline::FlatWriteFloat32((r8 + 680), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteFloat32((r8 + 684), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r8 + 688), f0.d);
    goto loc_8078D8F8;
}

loc_8078D8D8:
{
    r0 = MemoryInline::FlatRead32((r6 + 208));
}

loc_8078D8E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8078D8F8;
    }
}

loc_8078D8E4:
{
    MemoryInline::FlatWrite32((r6 + 208), r7);
    r0 = MemoryInline::FlatRead32((r8 + 700));
}

loc_8078D8F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8078D8F8;
    }
}

loc_8078D8F4:
{
    MemoryInline::FlatWrite32((r8 + 700), r7);
}

loc_8078D8F8:
{
    r4 = (r4 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8078D848;
    }
}

loc_8078D900:
{
    r0 = MemoryInline::FlatRead8((r3 + 352));
}

loc_8078D908:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8078D918;
    }
}

loc_8078D90C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 12032));
    // inline leaf 0x8078A1D4 (1 guest instruction(s))
    // end of inlined leaf 0x8078A1D4
}

loc_8078D918:
{
    r3 = 0x809C0000u;
    r7 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r5 = 0x809C0000u;
    r6 = MemoryInline::FlatRead8((r3 + 36));
    goto loc_8078D960;
}

loc_8078D930:
{
    r3 = MemoryInline::FlatRead32((r5 + -10448));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 2);
}

loc_8078D948:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8078D95C;
    }
}

loc_8078D94C:
{
    r0 = (r7 & 255);
    r4 = MemoryInline::FlatRead8((r3 + 32));
    r3 = (r31 + r0);
    MemoryInline::FlatWrite8((r3 + 353), static_cast<uint8_t>(r4));
}

loc_8078D95C:
{
    r7 = (r7 + 1);
}

loc_8078D960:
{
    r0 = (r7 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
}

loc_8078D968:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8078D930;
    }
}

loc_8078D96C:
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
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800001FB gpr_write=0x800001FB gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8078D824 func_8078D824 preserves=true fpr_mask=0x00000000

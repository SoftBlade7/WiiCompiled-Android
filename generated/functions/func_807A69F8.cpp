#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A69F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807A69F8;

loc_807A69F8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807A6A04:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A6AB0;
    }
}

loc_807A6A14:
{
    r7 = MemoryInline::FlatRead32((r3 + 124));
    r5 = 0;
    r6 = 0;
    r0 = (r7 & 32);
}

loc_807A6A24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807A6A50;
    }
}

loc_807A6A28:
{
    r0 = (r7 & 1);
}

loc_807A6A2C:
{
    r4 = 0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807A6A40;
    }
}

loc_807A6A34:
{
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r0 = (r0 & 939524096);
}

loc_807A6A3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807A6A44;
    }
}

loc_807A6A40:
{
    r4 = 1;
}

loc_807A6A44:
{
}

loc_807A6A48:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807A6A50;
    }
}

loc_807A6A4C:
{
    r6 = 1;
}

loc_807A6A50:
{
}

loc_807A6A54:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_807A6A64;
    }
}

loc_807A6A58:
{
    r0 = (r7 & 18);
}

loc_807A6A5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807A6A64;
    }
}

loc_807A6A60:
{
    r5 = 1;
}

loc_807A6A64:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_807A6A68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A6AB0;
    }
}

loc_807A6A6C:
{
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r0 = (r0 & 14680064);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A6A74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A6A80;
    }
}

loc_807A6A78:
{
    r3 = 0;
    goto loc_807A6C00;
}

loc_807A6A80:
{
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r5 = 0x80240000u;
    r0 = (r0 | 4194304);
    MemoryInline::FlatWrite32((r3 + 120), r0);
    r5 = (r5 + 28832);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite32((r3 + 364), r0);
    MemoryInline::FlatWrite32((r3 + 360), r4);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32((r3 + 368), r0);
    r3 = 1;
    goto loc_807A6C00;
}

loc_807A6AB0:
{
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r0 = (r0 & 192);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A6ABC:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_807A6AC8;
    }
}

loc_807A6AC0:
{
    r3 = 0;
    goto loc_807A6C00;
}

loc_807A6AC8:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r4 = 0x809C0000u;
    r4 = (r4 + 12104);
    r0 = (r0 * 116);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 20));
}

loc_807A6AE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807A6B14;
    }
}

loc_807A6AE8:
{
    r6 = 0x808D0000u;
    r6 = (r6 + 7360);
    r5 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if (((cr & 0x02000000u) == 0)) {
        goto loc_807A6B14;
    }
}

loc_807A6B08:
{
    MemoryInline::FlatWrite32((r3 + 360), r5);
    MemoryInline::FlatWrite32((r3 + 364), r4);
    MemoryInline::FlatWrite32((r3 + 368), r0);
}

loc_807A6B14:
{
    r0 = MemoryInline::FlatRead32((r3 + 176));
    r5 = MemoryInline::FlatRead32((r3 + 116));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A6B20:
{
    r4 = MemoryInline::FlatRead32((r3 + 120));
    r0 = (r5 | 2);
    MemoryInline::FlatWrite32((r3 + 116), r0);
    r0 = (r4 | 128);
    MemoryInline::FlatWrite32((r3 + 120), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A6B4C;
    }
}

loc_807A6B38:
{
    r3 = r31;
    ctx->lr = 0x807A6B40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8079EECCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r31 + 124));
    r0 = (r0 | 2097152);
    MemoryInline::FlatWrite32((r31 + 124), r0);
}

loc_807A6B4C:
{
    r3 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 22112));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807A6B5C:
{
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWrite8((r31 + 389), static_cast<uint8_t>(r0));
    r0 = (r0 | r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807A6B7C;
    }
}

loc_807A6B70:
{
    r0 = MemoryInline::FlatRead32((r31 + 120));
    r0 = (r0 | 1024);
    MemoryInline::FlatWrite32((r31 + 120), r0);
}

loc_807A6B7C:
{
    r0 = MemoryInline::FlatRead8((r31 + 389));
    r3 = 6;
}

loc_807A6B88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807A6B90;
    }
}

loc_807A6B8C:
{
    r3 = 30;
}

loc_807A6B90:
{
    MemoryInline::FlatWrite32((r31 + 392), r3);
    r4 = 16842752;
    r3 = MemoryInline::FlatRead32((r31 + 164));
    r4 = (r4 + 257);
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r4 & ~r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807A6BE0;
    }
}

loc_807A6BAC:
{
    r0 = MemoryInline::FlatRead8((r31 + 389));
}

loc_807A6BB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807A6BE0;
    }
}

loc_807A6BB8:
{
    r0 = MemoryInline::FlatRead32((r31 + 124));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8656));
    r0 = (r0 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A6BC8:
{
    r3 = MemoryInline::FlatRead32((r3 + 116));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A6BD8;
    }
}

loc_807A6BD0:
{
    r4 = (r31 + 140);
    goto loc_807A6BDC;
}

loc_807A6BD8:
{
    r4 = MemoryInline::FlatRead32((r31 + 152));
}

loc_807A6BDC:
{
    ctx->lr = 0x807A6BE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068D5E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807A6BE0:
{
    r0 = MemoryInline::FlatRead8((r31 + 389));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A6BE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A6BFC;
    }
}

loc_807A6BEC:
{
    r3 = r31;
    r4 = 0;
    r5 = 1;
    ctx->lr = 0x807A6BFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8079D920u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807A6BFC:
{
    r3 = 1;
}

loc_807A6C00:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807A69F8 func_807A69F8 preserves=true fpr_mask=0x00000000

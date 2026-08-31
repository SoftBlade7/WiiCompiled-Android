#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80853EC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80853EC0;

loc_80853EC0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
}

loc_80853ECC:
{
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r3;
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80853EE8;
    }
}

loc_80853EDC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_80853EE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80853FD4;
    }
}

loc_80853EE4:
{
    goto loc_808540EC;
}

loc_80853EE8:
{
    r4 = MemoryInline::FlatRead32((r3 + 1620));
    r5 = (r3 + 1732);
    r6 = 0;
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 1620), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x8060246Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(147));
}

loc_80853F14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80853F34;
    }
}

loc_80853F18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(144));
}

loc_80853F1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80853F54;
    }
}

loc_80853F20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(146));
}

loc_80853F24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80853F74;
    }
}

loc_80853F28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(145));
}

loc_80853F2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80853F94;
    }
}

loc_80853F30:
{
    goto loc_80853FB0;
}

loc_80853F34:
{
    r6 = 0x808B0000u;
    r3 = (r31 + 1732);
    r6 = (r6 + -5752);
    r4 = (r6 + 23);
    r5 = (r6 + 31);
    r6 = (r6 + 56);
    ctx->lr = 0x80853F50u;
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
    InvokeDirectCpu<0x805F9794u>(ctx);
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
    goto loc_80853FB0;
}

loc_80853F54:
{
    r6 = 0x808B0000u;
    r3 = (r31 + 1732);
    r6 = (r6 + -5752);
    r4 = (r6 + 74);
    r5 = (r6 + 82);
    r6 = (r6 + 107);
    ctx->lr = 0x80853F70u;
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
    InvokeDirectCpu<0x805F9794u>(ctx);
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
    goto loc_80853FB0;
}

loc_80853F74:
{
    r6 = 0x808B0000u;
    r3 = (r31 + 1732);
    r6 = (r6 + -5752);
    r4 = (r6 + 125);
    r5 = (r6 + 133);
    r6 = (r6 + 155);
    ctx->lr = 0x80853F90u;
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
    InvokeDirectCpu<0x805F9794u>(ctx);
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
    goto loc_80853FB0;
}

loc_80853F94:
{
    r6 = 0x808B0000u;
    r3 = (r31 + 1732);
    r6 = (r6 + -5752);
    r4 = (r6 + 173);
    r5 = (r6 + 181);
    r6 = (r6 + 207);
    ctx->lr = 0x80853FB0u;
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
    InvokeDirectCpu<0x805F9794u>(ctx);
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
}

loc_80853FB0:
{
    r3 = (r31 + 1732);
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x80853FC0u;
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
    InvokeDirectCpu<0x8063DDB4u>(ctx);
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
    r4 = 0x808B0000u;
    r3 = (r31 + 1732);
    f0.d = MemoryInline::FlatReadFloat32((r4 + -5768));
    MemoryInline::FlatWriteFloat32((r31 + 1856), f0.d);
    goto loc_808540F0;
}

loc_80853FD4:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(146));
}

loc_80853FE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80854008;
    }
}

loc_80853FEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(144));
}

loc_80853FF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80854008;
    }
}

loc_80853FF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(145));
}

loc_80853FF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085404C;
    }
}

loc_80853FFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(147));
}

loc_80854000:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085408C;
    }
}

loc_80854004:
{
    goto loc_808540EC;
}

loc_80854008:
{
    r4 = MemoryInline::FlatRead32((r31 + 1620));
    r3 = r31;
    r5 = (r31 + 2104);
    r6 = 0;
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r31 + 1620), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x8060246Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r4 = 0x808B0000u;
    r3 = (r31 + 2104);
    r4 = (r4 + -5752);
    r5 = 0;
    r4 = (r4 + 225);
    ctx->lr = 0x8085403Cu;
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
    InvokeDirectCpu<0x805F32DCu>(ctx);
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
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 2232), static_cast<uint8_t>(r0));
    r3 = (r31 + 2104);
    goto loc_808540F0;
}

loc_8085404C:
{
    r4 = MemoryInline::FlatRead32((r3 + 1620));
    r5 = (r3 + 2496);
    r6 = 0;
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 1620), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x8060246Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r4 = 0x808B0000u;
    r3 = (r31 + 2496);
    r4 = (r4 + -5752);
    r5 = 0;
    r4 = (r4 + 246);
    ctx->lr = 0x8085407Cu;
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
    InvokeDirectCpu<0x805F3A50u>(ctx);
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
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 2624), static_cast<uint8_t>(r0));
    r3 = (r31 + 2496);
    goto loc_808540F0;
}

loc_8085408C:
{
    r4 = MemoryInline::FlatRead32((r3 + 1620));
    r5 = (r3 + 2892);
    r6 = 0;
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 1620), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x8060246Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r1 + 8);
    r4 = (r31 + 2892);
    // inline leaf 0x805C2C18 (2 guest instruction(s))
    MemoryInline::FlatWriteRam32(r3, r4);
    // end of inlined leaf 0x805C2C18
    r6 = 0x808B0000u;
    r3 = (r1 + 8);
    r6 = (r6 + -5752);
    r7 = 0;
    r4 = (r6 + 265);
    r5 = (r6 + 273);
    r6 = (r6 + 281);
    ctx->lr = 0x808540D0u;
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
    InvokeDirectCpu<0x805C2C60u>(ctx);
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
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 3020), static_cast<uint8_t>(r0));
    r3 = (r1 + 8);
    r4 = -1;
    ctx->lr = 0x808540E4u;
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
    InvokeDirectCpu<0x805C2C20u>(ctx);
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
    r3 = (r31 + 2892);
    goto loc_808540F0;
}

loc_808540EC:
{
    r3 = 0;
}

loc_808540F0:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80853EC0 func_80853EC0 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805683B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805683B8;

loc_805683B8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 5448);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 144));
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 208));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805683EC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805683FC;
    }
}

loc_805683F0:
{
    r4 = 0x808B0000u;
    r4 = (r4 + 19760);
    MemoryInline::FlatWrite32((r3 + 192), r4);
}

loc_805683FC:
{
    r3 = r29;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f0.d = MemoryInline::FlatReadFloat32((r3 + 68));
    f7.d = MemoryInline::FlatReadFloat32((r29 + 232));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 72));
    f6.d = MemoryInline::FlatReadFloat32((r29 + 236));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f7.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 76));
    r3 = (r29 + 232);
    f5.d = MemoryInline::FlatReadFloat32((r29 + 240));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 136));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f0.d = PpcFmulsInline(f4.d, f1.d);
    f4.d = PpcFmulsInline(f3.d, f1.d);
    f3.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
    MemoryInline::FlatWriteFloat32((r29 + 232), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 236), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 240), f0.d);
    ctx->lr = 0x80568464u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r29 + 228));
    r0 = 0;
}

loc_80568470:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805684FC;
    }
}

loc_80568474:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 224));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 208));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80568488:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805684D0;
    }
}

loc_8056848C:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 212));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 216));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 212), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805684A4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805684AC;
    }
}

loc_805684A8:
{
    MemoryInline::FlatWriteFloat32((r29 + 212), f1.d);
}

loc_805684AC:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 216));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 220));
    r3 = MemoryInline::FlatRead32((r29 + 228));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 216), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805684C8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805684D0;
    }
}

loc_805684CC:
{
    MemoryInline::FlatWriteFloat32((r29 + 216), f1.d);
}

loc_805684D0:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 208));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 212));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 224));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 208), f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805684E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805684F8;
    }
}

loc_805684EC:
{
    MemoryInline::FlatWriteFloat32((r29 + 208), f2.d);
    r0 = 1;
    goto loc_805684FC;
}

loc_805684F8:
{
    r0 = 0;
}

loc_805684FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80568500:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80568508;
    }
}

loc_80568504:
{
    r30 = 1;
}

loc_80568508:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 208));
    r3 = (r29 + 176);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 36));
    r4 = (r29 + 232);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 140));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->lr = 0x80568528u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023A0A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = r29;
    // inline leaf 0x805903AC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // end of inlined leaf 0x805903AC
    r4 = (r29 + 176);
    ctx->lr = 0x80568538u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    InvokeDirectCpu<0x8059FD0Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000001F gpr_write=0xE000001B gpr_return=0x00000018 fpr_read=0xC000001F fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805683B8 func_805683B8 preserves=true fpr_mask=0x00000000

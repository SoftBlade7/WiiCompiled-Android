#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80568204(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
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

    goto loc_80568204;

loc_80568204:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f0.d = MemoryInline::FlatReadFloat32((r3 + 68));
    r4 = 0x80890000u;
    f7.d = MemoryInline::FlatReadFloat32((r30 + 232));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 72));
    f6.d = MemoryInline::FlatReadFloat32((r30 + 236));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f7.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 76));
    r3 = (r30 + 232);
    f5.d = MemoryInline::FlatReadFloat32((r30 + 240));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 5584));
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
    MemoryInline::FlatWriteFloat32((r30 + 232), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 236), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 240), f0.d);
    ctx->lr = 0x80568288u;
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
    r3 = MemoryInline::FlatRead32((r30 + 228));
    r0 = 0;
}

loc_80568294:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80568320;
    }
}

loc_80568298:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 224));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 208));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805682AC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805682F4;
    }
}

loc_805682B0:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 212));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 216));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 212), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805682C8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805682D0;
    }
}

loc_805682CC:
{
    MemoryInline::FlatWriteFloat32((r30 + 212), f1.d);
}

loc_805682D0:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 216));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 220));
    r3 = MemoryInline::FlatRead32((r30 + 228));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 216), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805682EC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805682F4;
    }
}

loc_805682F0:
{
    MemoryInline::FlatWriteFloat32((r30 + 216), f1.d);
}

loc_805682F4:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 208));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 212));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 224));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 208), f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8056830C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8056831C;
    }
}

loc_80568310:
{
    MemoryInline::FlatWriteFloat32((r30 + 208), f2.d);
    r0 = 1;
    goto loc_80568320;
}

loc_8056831C:
{
    r0 = 0;
}

loc_80568320:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80568324:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056832C;
    }
}

loc_80568328:
{
    r31 = 1;
}

loc_8056832C:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 208));
    r4 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 36));
    r3 = (r30 + 176);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 5588));
    r4 = (r30 + 232);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->lr = 0x80568350u;
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
    r3 = r30;
    // inline leaf 0x805903AC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // end of inlined leaf 0x805903AC
    r4 = (r30 + 176);
    ctx->lr = 0x80568360u;
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
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000000F gpr_write=0xC000001B gpr_return=0x00000018 fpr_read=0xC000001F fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80568204 func_80568204 preserves=true fpr_mask=0x00000000

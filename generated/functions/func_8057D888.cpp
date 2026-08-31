#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8057D888(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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

    goto loc_8057D888;

loc_8057D888:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r3;
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057D8AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057DA04;
    }
}

loc_8057D8B0:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & 32768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057D8B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057DA04;
    }
}

loc_8057D8BC:
{
    r4 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 60));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 6836));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057D8CC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057D8F4;
    }
}

loc_8057D8D0:
{
    r4 = 0x802A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16688));
    r4 = (r4 + 16688);
    MemoryInline::FlatWriteFloat32((r3 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 64), f0.d);
    goto loc_8057D960;
}

loc_8057D8F4:
{
    r6 = 0x802A0000u;
    r4 = 0x80890000u;
    r5 = (r6 + 16688);
    f6.d = MemoryInline::FlatReadFloat32((r3 + 60));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r6 + 16688));
    f7.d = MemoryInline::FlatReadFloat32((r3 + 56));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f5.d = MemoryInline::FlatReadFloat32((r3 + 64));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f7.d));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 6724));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f2.d, f3.d);
    f3.d = PpcFmulsInline(f4.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 56), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 60), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 64), f0.d);
    r3 = (r3 + 56);
    ctx->lr = 0x8057D960u;
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
}

loc_8057D960:
{
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 6836));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057D970:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057D998;
    }
}

loc_8057D974:
{
    r3 = 0x802A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16688));
    r3 = (r3 + 16688);
    MemoryInline::FlatWriteFloat32((r31 + 68), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r31 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    goto loc_8057DA04;
}

loc_8057D998:
{
    r3 = 0x802A0000u;
    r4 = 0x80890000u;
    r5 = (r3 + 16688);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 16688));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    r3 = (r31 + 68);
    f6.d = MemoryInline::FlatReadFloat32((r31 + 72));
    f7.d = MemoryInline::FlatReadFloat32((r31 + 68));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f5.d = MemoryInline::FlatReadFloat32((r31 + 76));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f7.d));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 6724));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f2.d, f3.d);
    f3.d = PpcFmulsInline(f4.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
    MemoryInline::FlatWriteFloat32((r31 + 68), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 72), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    ctx->lr = 0x8057DA04u;
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
}

loc_8057DA04:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

// RECOMP_GUEST_ABI gpr_read=0x8000007F gpr_write=0x8000007B gpr_return=0x00000018 fpr_read=0x800000FF fpr_write=0x800000FF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8057D888 func_8057D888 preserves=true fpr_mask=0x00000000

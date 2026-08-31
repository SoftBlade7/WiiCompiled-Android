#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805764FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805764FC;

loc_805764FC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 44));
    r4 = MemoryInline::FlatRead32((r3 + 32));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057652C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80576534;
    }
}

loc_80576530:
{
    MemoryInline::FlatWriteFloat32((r3 + 40), f1.d);
}

loc_80576534:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    r4 = MemoryInline::FlatRead32((r3 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 44), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80576550:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80576558;
    }
}

loc_80576554:
{
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
}

loc_80576558:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 36), f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80576570:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80576578;
    }
}

loc_80576574:
{
    MemoryInline::FlatWriteFloat32((r3 + 36), f2.d);
}

loc_80576578:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_80576580:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805765B8;
    }
}

loc_80576584:
{
    r4 = 0x80890000u;
    r5 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32((r4 + 6284));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 6136));
    f3.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    f2.d = f1.d;
    r3 = (r3 + 60);
    f3.d = (-(f3.d));
    f3.d = PpcFmulsInline(f3.d, f0.d);
    ctx->lr = 0x805765B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80239F58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    goto loc_805765F4;
}

loc_805765B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_805765BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805765C8;
    }
}

loc_805765C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_805765C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805765F4;
    }
}

loc_805765C8:
{
    r4 = 0x80890000u;
    r5 = 0x80890000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + 6284));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    r3 = (r3 + 60);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 6136));
    f3.d = f1.d;
    f2.d = PpcFmulsInline(f2.d, f0.d);
    ctx->lr = 0x805765F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80239F58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
}

loc_805765F4:
{
    r3 = r31;
    // inline leaf 0x805903AC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // end of inlined leaf 0x805903AC
    r4 = (r31 + 60);
    ctx->lr = 0x80576604u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x8059FC48u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000003F gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0xF800000F fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805764FC func_805764FC preserves=true fpr_mask=0x00000000

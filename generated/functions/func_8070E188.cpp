#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8070E188(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8070E188;

loc_8070E188:
{
    r6 = MemoryInline::FlatRead32((r3 + 96));
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead16((r3 + 156));
    r4 = MemoryInline::FlatRead32((r4 + 9892));
    r6 = (r6 & -16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(517));
}

loc_8070E1A0:
{
    r6 = (r6 | r4);
    MemoryInline::FlatWrite32((r3 + 96), r6);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E51C;
    }
}

loc_8070E1AC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070E284;
    }
}

loc_8070E1B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(389));
}

loc_8070E1B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E42C;
    }
}

loc_8070E1B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070E21C;
    }
}

loc_8070E1BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(234));
}

loc_8070E1C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E3C0;
    }
}

loc_8070E1C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070E1F8;
    }
}

loc_8070E1C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(214));
}

loc_8070E1CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E3A0;
    }
}

loc_8070E1D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070E1EC;
    }
}

loc_8070E1D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(207));
}

loc_8070E1D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E390;
    }
}

loc_8070E1DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8070E1E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(206));
}

loc_8070E1E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070E380;
    }
}

loc_8070E1E8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E1EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(221));
}

loc_8070E1F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E3B0;
    }
}

loc_8070E1F4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E1F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(357));
}

loc_8070E1FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E42C;
    }
}

loc_8070E200:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070E210;
    }
}

loc_8070E204:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(320));
}

loc_8070E208:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E3D0;
    }
}

loc_8070E20C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E210:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(378));
}

loc_8070E214:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E3E0;
    }
}

loc_8070E218:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E21C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(503));
}

loc_8070E220:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E4C8;
    }
}

loc_8070E224:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070E24C;
    }
}

loc_8070E228:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(417));
}

loc_8070E22C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E490;
    }
}

loc_8070E230:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070E240;
    }
}

loc_8070E234:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(395));
}

loc_8070E238:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E3F0;
    }
}

loc_8070E23C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E240:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(421));
}

loc_8070E244:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E4A0;
    }
}

loc_8070E248:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E24C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(511));
}

loc_8070E250:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E4EC;
    }
}

loc_8070E254:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070E270;
    }
}

loc_8070E258:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(509));
}

loc_8070E25C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E4DC;
    }
}

loc_8070E260:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8070E264:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(508));
}

loc_8070E268:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070E4C8;
    }
}

loc_8070E26C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E270:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(516));
}

loc_8070E274:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070E50C;
    }
}

loc_8070E278:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(513));
}

loc_8070E27C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8070E280:
{
    goto loc_8070E4FC;
}

loc_8070E284:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(707));
}

loc_8070E288:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E454;
    }
}

loc_8070E28C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070E314;
    }
}

loc_8070E290:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(529));
}

loc_8070E294:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8070E298:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070E2D4;
    }
}

loc_8070E29C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(524));
}

loc_8070E2A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8070E2A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070E2C0;
    }
}

loc_8070E2A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(522));
}

loc_8070E2AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E53C;
    }
}

loc_8070E2B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070E54C;
    }
}

loc_8070E2B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(519));
}

loc_8070E2B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8070E2BC:
{
    goto loc_8070E52C;
}

loc_8070E2C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(528));
}

loc_8070E2C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070E56C;
    }
}

loc_8070E2C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(526));
}

loc_8070E2CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8070E2D0:
{
    goto loc_8070E55C;
}

loc_8070E2D4:
{
}

loc_8070E2D8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(604))) {
        goto loc_8070E2F4;
    }
}

loc_8070E2DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(534));
}

loc_8070E2E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E5B0;
    }
}

loc_8070E2E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8070E2E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(531));
}

loc_8070E2EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8070E2F0:
{
    goto loc_8070E57C;
}

loc_8070E2F4:
{
}

loc_8070E2F8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(701))) {
        goto loc_8070E308;
    }
}

loc_8070E2FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(606));
}

loc_8070E300:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8070E304:
{
    goto loc_8070E5C0;
}

loc_8070E308:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(703));
}

loc_8070E30C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8070E310:
{
    goto loc_8070E454;
}

loc_8070E314:
{
}

loc_8070E318:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(734))) {
        goto loc_8070E354;
    }
}

loc_8070E31C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(713));
}

loc_8070E320:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E5D0;
    }
}

loc_8070E324:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070E340;
    }
}

loc_8070E328:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(711));
}

loc_8070E32C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8070E330:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070E440;
    }
}

loc_8070E334:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(710));
}

loc_8070E338:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070E42C;
    }
}

loc_8070E33C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E340:
{
}

loc_8070E344:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(732))) {
        goto loc_8070E454;
    }
}

loc_8070E348:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(715));
}

loc_8070E34C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8070E350:
{
    goto loc_8070E440;
}

loc_8070E354:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(8602));
}

loc_8070E358:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E5E0;
    }
}

loc_8070E35C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070E374;
    }
}

loc_8070E360:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(749));
}

loc_8070E364:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8070E368:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(747));
}

loc_8070E36C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070E42C;
    }
}

loc_8070E370:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E374:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10608));
}

loc_8070E378:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E42C;
    }
}

loc_8070E37C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E380:
{
    r0 = (r6 & -16);
    r0 = (r0 | 15);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E390:
{
    r0 = (r6 & -16);
    r0 = (r0 | 15);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E3A0:
{
    r0 = (r6 & -16);
    r0 = (r0 | 10);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E3B0:
{
    r0 = (r6 & -16);
    r0 = (r0 | 6);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E3C0:
{
    r0 = (r6 & -16);
    r0 = (r0 | 9);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E3D0:
{
    r0 = (r6 & -16);
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E3E0:
{
    r0 = (r6 & -16);
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E3F0:
{
    r5 = MemoryInline::FlatRead32((r3 + 152));
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 7472));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 60));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8070E404:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070E41C;
    }
}

loc_8070E40C:
{
    r0 = (r6 & -16);
    r0 = (r0 | 9);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E41C:
{
    r0 = (r6 & -16);
    r0 = (r0 | 3);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E42C:
{
    r0 = MemoryInline::FlatRead32((r3 + 96));
    r0 = (r0 & -16);
    r0 = (r0 | 3);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E440:
{
    r0 = MemoryInline::FlatRead32((r3 + 96));
    r0 = (r0 & -16);
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E454:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(11));
}

loc_8070E464:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070E47C;
    }
}

loc_8070E468:
{
    r0 = MemoryInline::FlatRead32((r3 + 96));
    r0 = (r0 & -16);
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E47C:
{
    r0 = MemoryInline::FlatRead32((r3 + 96));
    r0 = (r0 & -16);
    r0 = (r0 | 3);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E490:
{
    r0 = (r6 & -16);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E4A0:
{
    r5 = MemoryInline::FlatRead32((r3 + 152));
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 7476));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 60));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8070E4B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_8070E4B8:
{
    r0 = (r6 & -16);
    r0 = (r0 | 7);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E4C8:
{
    r0 = MemoryInline::FlatRead32((r3 + 96));
    r0 = (r0 & -16);
    r0 = (r0 | 6);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E4DC:
{
    r0 = (r6 & -16);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E4EC:
{
    r0 = (r6 & -16);
    r0 = (r0 | 14);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E4FC:
{
    r0 = (r6 & -16);
    r0 = (r0 | 7);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E50C:
{
    r0 = (r6 & -16);
    r0 = (r0 | 12);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E51C:
{
    r0 = (r6 & -16);
    r0 = (r0 | 9);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E52C:
{
    r0 = (r6 & -16);
    r0 = (r0 | 14);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E53C:
{
    r0 = (r6 & -16);
    r0 = (r0 | 14);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E54C:
{
    r0 = (r6 & -16);
    r0 = (r0 | 10);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E55C:
{
    r0 = (r6 & -16);
    r0 = (r0 | 9);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E56C:
{
    r0 = (r6 & -16);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E57C:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 10232));
    r0 = MemoryInline::FlatRead32((r4 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(12));
}

loc_8070E58C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070E5A0;
    }
}

loc_8070E590:
{
    r0 = (r6 & -16);
    r0 = (r0 | 3);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E5A0:
{
    r0 = (r6 & -16);
    r0 = (r0 | 6);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E5B0:
{
    r0 = (r6 & -16);
    r0 = (r0 | 14);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E5C0:
{
    r0 = (r6 & -16);
    r0 = (r0 | 14);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E5D0:
{
    r0 = (r6 & -16);
    r0 = (r0 | 14);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8070E5E0:
{
    r0 = (r6 & -16);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8070E188 func_8070E188 preserves=true fpr_mask=0x00000000
